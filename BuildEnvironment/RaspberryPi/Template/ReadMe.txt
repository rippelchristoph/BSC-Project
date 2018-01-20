/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This software is delivered "as is" and shows the usage of other software
* components. It is provided as an example software which is intended to be
* modified and extended according to particular requirements.
*
* TARA Systems hereby disclaims all warranties and conditions with regard to the
* software, including all implied warranties and conditions of merchantability
* and non-infringement of any third party IPR or other rights which may result
* from the use or the inability to use the software.
*
********************************************************************************
*
* DESCRIPTION:
*
*   Template
*
*   This directory contains the necessary source codes and makefiles to compile
*   and link an Embedded Wizard generated application for a Raspberry Pi
*   target. It is just a template for convenience.
*
*   This package is prepared and tested for the following hardware:
*   - Raspberry Pi 2 Model B with 7" Raspberry Touchscreen (800x480).
*   - Raspberry Pi 3 Model B with 7" Raspberry Touchscreen (800x480).
*
*******************************************************************************/

Getting started with Raspberry Pi target:
-----------------------------------------------
  In order to get your first Embedded Wizard generated UI application up and
  running on your Raspberry Pi target, we have prepared a detailed article, which
  covers all necessary steps.
  We highly recommend to study the following document:

  http://doc.embedded-wizard.de/getting-started-raspberrypi.html


How to build a demo using this tempalte for the Raspberry Pi target:
--------------------------------------------------------------------

  1.) Start Embedded Wizard Studio and open any project.
      Create a profile for the Raspberry Pi target and make all settings so that
      it fits to your target (e.g. PlatformPackage, ScreenSize).

      Set the output directory to the subdirectory /Template/GeneratedCode.

      => Generate code by pressing 'F8'

   2.) Connect to your Raspberry Pi via SSH and mount the root directory of your
       Build Environment.

   3.) Navigate to the template directory:

       cd Template

   4.) Compile and link the example:

       sudo make

   5.) If the application was compiled and linked successfully, you can
       execute the application:

       ./EmWiApplication

   6.) If necessary, adapt the makefile to your needs.
