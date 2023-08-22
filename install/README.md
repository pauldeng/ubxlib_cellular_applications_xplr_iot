# Installation

This directory contains the operating system specific installation scripts for the development tools required to build the cellular applications for the XPLR-IoT-1 development kit. This is much the same as the ubxlib_examples_xplr-iot-1 installer, but downloads the cellular applications repository.

These scripts installs all the necessary packages, tools and drivers from scratch. They can typically be used on a PC that has not been used for software development before or one with missing components.

The scripts will also install git and clone the actual repository.

## Windows

[Right click this link](https://github.com/pauldeng/ubxlib_cellular_applications_xplr_iot/raw/master/install/install_windows.bat) and then chose "Save link as" in the browser to download the installation script for Windows. You will need to right click on the downloaded file and select `Properties` and click the `unblox` checkbox before you can run this batch file.

Right click on the downloaded file and select "Run as administrator". The installation will then start and it is quite a lengthy process, typically ~10 min. **Please avoid** clicking in the window of this operation if you have "Quick Edit" for command windows enabled. Doing so may halt the downloading process which in turn can lead to timeouts and later problems for the installation.

The [chocolatey](https://chocolatey.org/) package manager is used for installing the required tools. The required drivers for the XPLR-IOT-1 serial ports will also be installed.

The examples repository is installed in a sub directory to your home directory named xplriot1\ubxlib_cellular_applications_xplr_iot. Start a command prompt and change working directory to this and then you can start the operations described on the main README page.

![Install log](../readme_images/install_windows.png)

## Linux

[Click this link](https://github.com/pauldeng/ubxlib_cellular_applications_xplr_iot/raw/master/install/install_linux) and then chose "Save as" in the browser to download the installation script for Debian Linux. Once downloaded just run it. It will require sudo access as new packages will be installed. The installation will take some time so please be patient.

When the installation has completed you should either log out and in again or run "source ~/.profile before doing any further operations related to this repository.

The examples repository is installed in a sub directory to your home directory named ~/xplriot1/ubxlib_cellular_applications_xplr_iot. Start a command prompt and change working directory to this and then you can start the operations described in the main README page.
