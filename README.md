﻿# BOB3 Repository!

[![Version: 1.0 Release](https://img.shields.io/badge/Version-1.0%20Release-green.svg)](https://github.com/sunriax) [![Slack: Join](https://img.shields.io/badge/Slack-Join-blue.svg)](https://join.slack.com/t/sunriax-technology/shared_invite/enQtMjg3OTE2MjIyMTE2LTU1MmEwNmY5Y2Y3MTNjNzFhYzE5NTFkYWY4NzE0YmQzNzA5NjBkMWQ3ODkyNDI1NjJmMGIwYzMwOGI5ZjA2MDg)

## Description

The BOB3 repository is a template for programming bob3 with Microchip Atmel Studio. Either in standard mode or with the batch file to load the bob3 config automatically. The bob3 comes with an Microchip (Atmel) ATmega88 which can be programmed through bobdude.


1. Supported Controller
   * Microchip (Atmel) ATmega88
1. Development Hardware
   * Bob3 ([nicai-systems](https://www.bob3.org/de/))
1. Additional Hardware
   * Some kind of pushbuttons.
1. Development Software
   * Microchip Atmel Studio (uC C/C++)

## Why Atmel Studio

Because sometimes you would preform your own functions or special functions. If you program with the bob3 online platform you can not use timer0 and other things, because they are defined in the bob3.h! Also it is possible that the level of the programmer has increased and the bob3 online plattform is simply to small.

## Getting Started

First you should install BobDude which is needed to program bob3. Tool can be found under following link:

* [BobDude](https://www.bob3.org/de/code)

After that clone or download the repository check if the bobdude.exe path in batch file ("bob3hex.bat") is correct. Then open the Microchip Atmel Studio solution in the cloned/downloaded directory.

## External Tools

To start the Programmer with the correct file, it is necessary to configure External Tools *.).

![Add external tool](https://raw.githubusercontent.com/sunriax/manual/master/docs/image/bob3_external.png "Add external tool")
![Setup external tool](https://raw.githubusercontent.com/sunriax/manual/master/docs/image/bob3_external_setup.png "Setup external tool")

Setup following configuration:

### Title

```
BOB3
```

### Command

```
%userprofile%\Template\bob3hex.bat
```

### Arguments

```
$(SolutionDir) $(TargetDir)$(TargetName)
```

Just click Ok and the Tool should be integrated!

![Completed external tool](https://raw.githubusercontent.com/sunriax/manual/master/docs/image/bob3_external_complete.png "Completed external tool")

Build the template project and hit the Bob3 button in the tools menu.

![Build Template](https://raw.githubusercontent.com/sunriax/manual/master/docs/image/bob3_build_template.png "Build Template")
![Flash Template](https://raw.githubusercontent.com/sunriax/manual/master/docs/image/bob3_flash_template.png "Flash Template")

Now it is time to hit the Program button in BobDude software and the Template application should run on Bob3!

## Additional Information

*.) If the External Tool menu is not available, please follow additional steps:


![Select Profile](https://raw.githubusercontent.com/sunriax/manual/master/docs/image/bob3_profile.png "Select Profile")
![Advanced Profile](https://raw.githubusercontent.com/sunriax/manual/master/docs/image/bob3_advanced.png "Advanced Profile")


You can find more additional information in the [manual](https://github.com/sunriax/manual/tree/master/docs) repository and/or visit the [SUNriaX Project Wiki](https://wiki.sunriax.at/) for further information (currently under construction).

If there are any further questions feel free to start an issue or contact us, we try to react as quick as possible.


## Important Notice

This files are valid for all repositories at the SUNriaX Github!
* [Readme](https://github.com/sunriax/manual/blob/master/README.md)
* [License](https://github.com/sunriax/manual/blob/master/LICENSE.md)
* [Warranty](https://github.com/sunriax/manual/blob/master/WARRANTY.md)

---
**R. GÄCHTER, Rankweil Oct/2018**
