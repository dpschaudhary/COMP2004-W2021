# Windows 10

***NOTE***:  Even though code runs successfully in the environment suggested here, it will not necessarily be error free in the Labnet environment for marking.  You are responsible for testing on a Labnet system.

## Installation Steps

1. Install Visual Studio Code.  It is a free program, search for it, and follow the official install instructions. Specifically don't install extensions, follow bundled installers etc.  https://code.visualstudio.com

2. Remember this is for Windows 10.  Install Windows Subsystem for Linux following the Quickstart linked on this page.  [An overview on the Windows Subsystem for Linux | Microsoft Docs](https://docs.microsoft.com/en-us/windows/wsl/)

3. Make sure that you restart Win10 when requreid.

4. Next open the Microsoft Store, it is available in Windows 10.

5. Use the search (currently upper right part of the store window) and search for Ubuntu.
   
   1. Pick the Ubuntu with no version numbers

6. Use the big "Get" button to install.  Follow whatever instructions appear.

## Configuration Steps

At this point you should have successfully installed VS Code and WSL with a Linux distribution, the next part is to link them together.

1. Start Visual studio code, go to the extensions. 
   
   ![VS Code Extensions Icon](assets/extensionsicon.png)

2. Search for "Remote - WSL", use the install button and install it.  Restart Visual Studio Code (VSC) if asked.

3. Now in the lower left corner of VSC there will be an icon like: 
   
   ![VS Code Remote SSH Icon](assets/wslicon.png)

4. Click it and, then in the selections that open in the upper centre of the window, pick new window.
