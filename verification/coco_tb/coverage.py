# Import coverage-related decorators and utilities
from cocotb_coverage.coverage import coverage_db, CoverPoint, CoverCross
import io  # For in-memory string buffer

# Define a class to handle instruction coverage tracking
class InsCoverage:
    
    def __init__(self):
        pass  # No specific initialization for now

    # Define coverage bins for each instruction type and immediate value
    R_bins = [1, 2, 3, 4, 5]
    I_bins = [1, 2, 3]
    S_bins = [1, 2, 3]
    B_bins = [1, 2, 3]
    U_bins = [1, 2]
    J_bins = [1, 2]
    IMM_bins = [1, 2, 3, 4, 5, 6]

    # Names of the coverage points used, for tracking/reporting
    total_bins_name = ["top.simple.R", "top.cross.B_IMM", "top.cross.I_IMM",
                       "top.cross.S_IMM", "top.cross.U_IMM", "top.cross.J_IMM"]

    # Initialize statistics for coverage
    covered_bins = 0
    total_bins = 0
    total_coverage = 0

    # Define CoverPoints: single-dimensional coverage points
    @CoverPoint("top.simple.R", xf=lambda d: d["R"], bins=R_bins)
    @CoverPoint("top.simple.I", xf=lambda d: d["I"], bins=I_bins)
    @CoverPoint("top.simple.S", xf=lambda d: d["S"], bins=S_bins)
    @CoverPoint("top.simple.B", xf=lambda d: d["B"], bins=B_bins)
    @CoverPoint("top.simple.U", xf=lambda d: d["U"], bins=U_bins)
    @CoverPoint("top.simple.J", xf=lambda d: d["J"], bins=J_bins)
    @CoverPoint("top.simple.IMM", xf=lambda d: d["IMM"], bins=IMM_bins)

    # Define cross coverage between instruction types and IMM field
    @CoverCross("top.cross.I_IMM", items=["top.simple.I", "top.simple.IMM"])
    @CoverCross("top.cross.S_IMM", items=["top.simple.S", "top.simple.IMM"])
    @CoverCross("top.cross.B_IMM", items=["top.simple.B", "top.simple.IMM"])
    @CoverCross("top.cross.U_IMM", items=["top.simple.U", "top.simple.IMM"])
    @CoverCross("top.cross.J_IMM", items=["top.simple.J", "top.simple.IMM"])

    # The actual sample function body is unused—logic is in decorators
    def sample(self, data):
        pass 

    # Safely call sample() with default 0 values if any field is missing
    def safe_sample(self, data: dict):
        full_data = {}
        for key in ["R", "I", "S", "B", "U", "J", "IMM"]:
            full_data[key] = data.get(key, 0)  # Use 0 as default if missing
        self.sample(full_data)

    # Compute the total number of bins (individual + cross coverage)
    def get_total_bins(self):
        self.total_bins = 0
        self.total_bins += len(self.R_bins)  # R type CoverPoint
        self.total_bins += len(self.I_bins) * len(self.IMM_bins)  # I_IMM cross
        self.total_bins += len(self.S_bins) * len(self.IMM_bins)  # S_IMM cross
        self.total_bins += len(self.B_bins) * len(self.IMM_bins)  # B_IMM cross
        self.total_bins += len(self.U_bins) * len(self.IMM_bins)  # U_IMM cross
        self.total_bins += len(self.J_bins) * len(self.IMM_bins)  # J_IMM cross
        return self.total_bins

    # Export coverage database to a YAML file
    def gen_report(self):
        coverage_db.export_to_yaml()

    # Return a string version of the coverage report
    def get_coverage_report(self):
        buf = io.StringIO()
        coverage_db.report_coverage(buf.write, bins=False)
        return buf.getvalue()

    # Parse the coverage report and print current percentage
    def get_current_coverage(self):
        ss = cov.get_coverage_report()
        pattern1 = "coverage="
        pattern2 = "size="
        pos1 = ss.find(pattern1)
        pos2 = ss.find(pattern2)
        ss1 = ""
        ss2 = ""

        # Extract the value after "coverage="
        while(pos1):
            if(ss[pos1] == ','):
                break
            ss1 = ss1+ss[pos1]
            pos1 = pos1+1

        # Extract the value after "size="
        while(pos2):
            if(ss[pos2] == ' '):
                break
            ss2 = ss2+ss[pos2]
            pos2 = pos2+1

        # Compute coverage ratio and print
        self.covered_bins = int(ss1.split("=")[-1])
        self.total_bins = int(ss2.split('=')[-1])
        self.total_coverage = float(self.covered_bins/self.total_bins)
        print("[INFO] Current coverage is {:.2f}%".format(self.total_coverage * 100))

# Main testing block for manual sampling
if __name__ == "__main__":
    
    cov = InsCoverage()  # Create coverage instance

    # Submit a series of samples to populate coverage bins
    cov.safe_sample({"R": 1})
    cov.safe_sample({"R": 2, "I": 0, "IMM": 0})
    cov.safe_sample({"R": 3, "I": 0, "IMM": 0})
    cov.safe_sample({"R": 4, "I": 0, "IMM": 0})
    cov.safe_sample({"R": 5, "I": 0, "IMM": 0})
    cov.safe_sample({"R": 0, "I": 2, "IMM": 1})
    cov.safe_sample({"R": 0, "I": 3, "IMM": 2})
    cov.safe_sample({"R": 0, "I": 1, "IMM": 3})

    # Display the current coverage status
    cov.get_current_coverage()

    # Optionally get detailed report
    cov.get_coverage_report()
