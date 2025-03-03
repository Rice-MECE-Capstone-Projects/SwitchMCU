import subprocess

def run_make(target=None):
    """
    Executes a make command optionally with a specified target.

    :param target: The make target to build (e.g., 'all', 'clean'). If None, the default target is built.
    :type target: str, optional
    :return: The output from the make command.
    :rtype: str
    :raises subprocess.CalledProcessError: If the make command fails.
    """
    try:
        # Construct the make command
        command = ['make']
        if target:
            command.append(target)

        # Execute the make command
        result = subprocess.run(command, check=True, text=True, capture_output=True)

        # Return the standard output from the command
        return result.stdout

    except subprocess.CalledProcessError as e:
        # Handle errors in the make command
        print(f"Make command failed with return code {e.returncode}")
        print(f"Error output:\n{e.stderr}")
        raise

# Example usage:
if __name__ == "__main__":
    try:
        output = run_make('clean')
        output = run_make('sim')
        print(f"Make command output:\n{output}")
    except subprocess.CalledProcessError:
        print("An error occurred while running the make command.")
