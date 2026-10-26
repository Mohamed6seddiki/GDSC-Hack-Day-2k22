# Source - https://stackoverflow.com/a/3451150
# Posted by Rahul, modified by community. See post 'Timeline' for change history
# Retrieved 2026-10-26, License - CC BY-SA 4.0

import zipfile
import os

path_to_unzip_file="C:/Users/MASSIVE/Desktop/moh solution/programming/UnzipMe"

os.chdir(path_to_unzip_file)


i=1337
while i>1:
    
    file_name=f"flag{i}.zip"
    with zipfile.ZipFile(file_name) as f:
        f.extractall()

    os.remove(file_name)
    i-=1