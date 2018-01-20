********************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
* This software is the proprietary information of TARA Systems GmbH.
* All Rights Reserved. Use is subject to license terms.
*
********************************************************************************

Embedded Wizard RaspberryPi OpenGL Platform Package - ReadMe
--------------------------------------------------------------------------------
This file contains a description of all platform specific details:
  1.) Platform Specific Release Notes (Version History)
  2.) Supported Platforms and Color Formats
  3.) Test and Verification Notes

Getting started with Embedded Wizard Studio:
--------------------------------------------
  In order to get familiar with Embedded Wizard Studio and the UI development
  work-flow, we highly recommend to study our online documentation:

  http://doc.embedded-wizard.de

  Furthermore, we have collected many 'Questions and Answers' covering
  typical Embedded Wizard programming aspects. Please visit our community:

  http://ask.embedded-wizard.de

  Please use this platform to drop your questions, answers and ideas.

--------------------------------------------------------------------------------

1.) Platform Specific Release Notes (Version History)
--------------------------------------------------------------------------------
Please read first the Embedded Wizard Release Notes, to be informed about all
general improvements or changes:

  http://doc.embedded-wizard.de/release-notes

These are the platform specific changes:

* Version V8.20

* Version V8.10

* Version V8.00
  - Support of 'Raspberry Pi 3 Model B' and 'Raspberry Pi 2 Model B',
    both using OpenGL with color format RGBA8888.

--------------------------------------------------------------------------------

2.) Supported Platforms and Color Formats
--------------------------------------------------------------------------------
This Platform Package supports the following chipsets and color formats:

OpenGL       : RaspberryPi OpenGL
  + RGBA8888 : 32 bit color format with 8 bit red, 8 bit green, 8 bit blue
               and 8 bit alpha values.

--------------------------------------------------------------------------------

3.) Test and Verification Notes
--------------------------------------------------------------------------------
This Platform Package Release was tested on the following environments:

EmWi Version     : V8.10
Platform Package : RGBA8888
Chipset          : BCM2836
Hardware         : Raspberry Pi 2 Model B
Operating System : Raspbian Embedded Linux
Software Tree    :
Compiler/Toolset : GNU GCC Compiler
Test Result      : o.k - 27/01/17 - msy, mme

EmWi Version     : V8.10
Platform Package : RGBA8888
Chipset          : BCM2837
Hardware         : Raspberry Pi 3 Model B
Operating System : Raspbian Embedded Linux
Software Tree    :
Compiler/Toolset : GNU GCC Compiler
Test Result      : o.k - 27/01/17 - msy, mme

--------------------------------------------------------------------------------
