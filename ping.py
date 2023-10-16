import subprocess

while True:
    subprocess.call(["ping", "-c", "1", "8.8.8.8"])