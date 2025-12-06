from PyQt6.QtWidgets import QApplication, QWidget, QFileDialog, QListWidgetItem, QMessageBox
from PyQt6.QtCore import QProcess
from PyQt6.QtGui import QFont
from ui_main import Ui_CocotbSuite
import sys
import os

# pyuic6 -o ui_main.py main.ui

class MainWindow(QWidget):
    def __init__(self):
        super().__init__()
        self.ui = Ui_CocotbSuite()
        self.ui.setupUi(self)

        self.setLayout(self.ui.gridLayout)

        font = QFont("Courier New")
        font.setStyleHint(QFont.StyleHint.Monospace)
        self.ui.connect_text.setFont(font)
        self.ui.verify_text.setFont(font)

        self.process = QProcess(self)
        self.process.readyReadStandardOutput.connect(self.on_stdout_received)

        self.ui.edit_dut.clicked.connect(self.select_dut_directory)
        self.ui.edit_tb.clicked.connect(self.select_tb_directory)
        self.ui.sel_dut.clicked.connect(self.select_dut_files)
        self.ui.clr_dut.clicked.connect(self.clear_dut_list)  
        self.ui.del_dut.clicked.connect(self.delete_dut_files)
        self.ui.verify_page.clicked.connect(self.switch_to_text_view)
        self.ui.conn_page.clicked.connect(self.switch_to_list_view)
        self.ui.autowire_btn.clicked.connect(self.run_connection)
        self.ui.clearinfo_btn.clicked.connect(self.clear_connect_info)

    def switch_to_text_view(self):
        self.ui.stackedWidget.setCurrentIndex(0)

    def switch_to_list_view(self):
        self.ui.stackedWidget.setCurrentIndex(1)

    def select_dut_directory(self):
        dir_path = QFileDialog.getExistingDirectory(self, "Select DUT Directory")
        if dir_path:  
            self.ui.dir_dut.setText(dir_path)

    def select_tb_directory(self):
        dir_path = QFileDialog.getExistingDirectory(self, "Select TestBench Directory")
        if dir_path:  
            self.ui.dir_tb.setText(dir_path)

    def select_dut_files(self):
        default_dir = self.ui.dir_dut.text().strip()
        if not os.path.isdir(default_dir):
            default_dir = os.getcwd()

        files, _ = QFileDialog.getOpenFileNames(
            self, "Select Verilog Files", default_dir, "Verilog Files (*.v);;All Files (*)"
        )

        if files:
            self.ui.dut_list.clear() 
            for file in files:
                relative_path = os.path.relpath(file, default_dir)
                item = QListWidgetItem(relative_path)
                self.ui.dut_list.addItem(item)
                self.ui.selectA_dut.addItem(item.text())
                self.ui.selectB_dut.addItem(item.text())
    
    def clear_connect_info(self):
        self.ui.connect_text.clear()

    def run_connection(self):
        base_path = os.getcwd().replace("GUI", "")
        script_path = "v_connector.py"
        arg1 = "decode.v"
        arg2 = "execute.v"
        self.ui.connect_text.append("Running connection script...\n")
        self.process.setWorkingDirectory(base_path)
        self.process.start("python3", [script_path, arg1, arg2])

    def delete_dut_files(self):
        selected_items = self.ui.dut_list.selectedItems()
        if not selected_items:
            return

        for item in selected_items:
            self.ui.dut_list.takeItem(self.ui.dut_list.row(item))

    def clear_dut_list(self):
        self.ui.dut_list.clear()

    def on_stdout_received(self):
        output = self.process.readAllStandardOutput().data().decode()
        index = self.ui.stackedWidget.currentIndex()
        if index == 0:
            self.ui.verify_text.append(output)
        else:
            self.ui.connect_text.append(output)

if __name__ == "__main__":
    app = QApplication(sys.argv)
    window = MainWindow()
    window.show()
    sys.exit(app.exec())
