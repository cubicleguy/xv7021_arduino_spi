# Table of Contents

______________________________________________________________________

<!---toc start-->

- [Table of Contents](#table-of-contents)
- [Epson XV7021BB SPI Driver for Arduino](#epson-xv7021bb-spi-driver-for-arduino)
- [Hardware Considerations](#hardware-considerations)
- [Installation Instructions](#installation-instructions)
  - [1. Install Arduino IDE](#1-install-arduino-ide)
  - [2. If Applicable Install the Teensy 3.6 board](#2-if-applicable-install-the-teensy-36-board)
  - [3. If Applicable Install the Arduino SAM boards](#3-if-applicable-install-the-arduino-sam-boards)
  - [4. Install Epson XV7021_SPI Library with example sketches](#4-install-epson-xv7021_spi-library-with-example-sketches)
  - [5. Use the IDE to compile example sketches and upload to the board](#5-use-the-ide-to-compile-example-sketches-and-upload-to-the-board)
- [Example Serial Console Output](#example-serial-console-output)
  - [Single Gyro Example](#single-gyro-example)
  - [Three Gyro Example](#three-gyro-example)
- [Change Record:](#change-record)

<!---toc end-->

# Epson XV7021BB SPI Driver for Arduino

______________________________________________________________________

This is an example test library for the Epson XV7021BB
using the 4-wire SPI interface.
It is developed on the Arduino Zero or Teensy 3.6
development board (Teensyduino) and includes example applications that
can be used within the Arduino IDE.
The library requires one SPI port and one UART port on the Arduino (one UART for serial
console output, and one SPI for connection to Epson device).

For detailed information on the Epson Gyro Sensors, refer to the datasheet at
----> https://www.epsondevice.com/crystal/en/products/sensor/

For further information on the Arduino, refer to their website at
----> http://www.arduino.cc

This software is released under the BSD license (see license.txt).
All text must be included in any redistribution.

# Hardware Considerations

______________________________________________________________________

This library assumes that the user has the following:

- Epson XV7021BB gyro sensor device
- Arduino Teensy 3.6 or Arduino Zero (or compatible) development board
- Arduino IDE software v2.3.6 or greater
- This software package
- Micro USB cable to power/connect to development board and use Serial Monitor

The default configuration of the driver assumes that:

- Epson device is connected to `SPI`
- serial console output is connected to `Serial`

The following table shows the default pin mapping.

Circuit Pinmapping:

| Signal on Host | Teensy 3.6 | Arduino Zero/DUE | XV7021BB |
| -------------- | ---------- | ---------------- | -------- |
| SS             | pin 4      | pin 4            | pin 2    |
| MOSI           | pin 11     | SPI-4            | pin 1    |
| MISO           | pin 12     | SPI-1            | pin 9    |
| SCK            | pin 13     | SPI-3            | pin 10   |

**CAUTION**: The Epson device I/O interface is 1.65V to 3.6V CMOS.
Be sure to NOT use only Arduino devices that are 5.0V I/O!

# Installation Instructions

______________________________________________________________________

To use the Epson XV7021_SPI driver for Arduino and examples, the following steps are required.

1. Install Arduino IDE (if not already installed)
2. Install the Arduino board
3. Install Epson XV7021_SPI Library for Arduino and example sketches
4. Use the IDE to compile example sketches and upload to the Arduino board

## 1. Install Arduino IDE

______________________________________________________________________

The Epson XV7021BB library for Arduino is designed to work with the Arduino IDE.
The IDE requires a platform running Windows, Mac OS X, or Linux.
If you do not have the IDE installed on your development platform, please visit the Arduino
website and download the version of the IDE compatible with your operating system.
Once the IDE is installed on your development platform, proceed to the next step.
For specific requirements and installation instructions, refer to the Arduino website at www.arduino.cc.

## 2. If Applicable Install the Teensy 3.6 board

______________________________________________________________________

The default installation of Arduino IDE may not include support for the Teensy 3.6.
To confirm whether Teensy support is installed click on `Tools->Board->Boards Manager...` on the IDE menu.

Search for "Teensy" and confirm whether the `Teensy (for Arduino IDE 2.0.4 or later)` board package is installed. If the
package is not installed, install it the latest version. Once the Teensy package is installed,
proceed to the next step.

## 3. If Applicable Install the Arduino SAM boards

______________________________________________________________________

The default installation of Arduino IDE may not include support for the Arduino Zero.
To confirm whether Zero support is installed click on `Tools->Board->Boards Manager...` on the IDE menu.

Confirm whether the `Arduino SAM Boards (32-bits ARM Cortex-M0+)` board package is installed. If the
package is not installed, install the latest version that matches your version of the IDE.
Once the SAM Boards package is installed, proceed to the next step

## 4. Install Epson XV7021_SPI Library with example sketches

______________________________________________________________________

The Epson XV7021BB library for Arduino is available for install within the Arduino IDE if connected to the internet.
In the Arduino IDE click on `Tools->Manage Libraries->Library Manager search for Epson_SU_SPI...`.
Then select the Epson XV7021BB library for Arduino package to install the driver and examples.

The Epson XV7021BB library for Arduino is available as a .zip archive from https://github.com/cubicleguy/xv7021_spi/releases.
The IDE can directly import the driver from a .zip file, so on the IDE menu click on `Sketch->Include Library->Add .ZIP Library...`.
Then select the Epson XV7021BB library for Arduino ZIP package. This will install the driver and examples.

## 5. Use the IDE to compile example sketches and upload to the board

______________________________________________________________________

Before compiling the example sketches, set the Board and Port settings in the IDE.
The Board and Port settings tell the IDE which Arduino product is being used and how to communicate with it.
To set the Board, click `Tools->Board->select the Teensy 3.6, Arduino Zero, or other compatible board`.
To set the Port, click `Tools->Port->select the proper serial port`.

The port that your Arduino board is located on may differ according to the operating system on the development system.
For issues regarding USB port connections, please refer to the Arduino website at http://www.arduino.cc.

The following are examples sketches included in the library:

- xv7021bb_spi_sampling_single_gyro.ino is designed to demonstrate initializing and reading a single XV7021BB gyro.
- xv7021bb_spi_sampling_three_gyro.ino is similar but for multi-slave 3-gyro configuration of XV7021BB gyros F-code H, J, L.

To open the example sketches click on `File->Examples`, find the `xv7021_spi...`, and then select one of the example sketches.
Once the example sketch is loaded, it can be compiled and uploaded to the Arduino.
**NOTE:** The Upload stage will fail if the IDE `Board` and `Port` settings are not configured correctly.

If the upload to the Arduino completes successfully, the output from the example sketch can be viewed using
the Serial Monitor available in `Tools->Serial Monitor`.
**NOTE:** You may have to set the serial baudrate on the Serial Monitor to match the baudrate setting in the sketch.

# Example Serial Console Output

______________________________________________________________________

## Single Gyro Example

```
Platform: Normal Arduino
Open SPI Port for Epson device: nCS on 4 @ 5000000 Hz
**Reset**
**Init Gyro**
----------------------
XV7021 Slave ID: 1
High Pass Filter: Off
HPF Fc: 0.1 Hz
Notch Filter: Off
LPF Order: 2nd
LPF Fc: 100 Hz
EnbCalibCmd: Disable
Sampling Rate: Fs=FULL
Temperature Data Format: 12-bit
Gyro SF: 0.00005580
TempC SF: 0.06250000
----------------------

Normal Angular Rate Read & Temperature
=================
Sample#	Gyro	TempC
0	-0.01183	25.937
1	-0.01657	25.937
2	-0.02037	25.937
3	-0.01903	25.937
4	-0.02824	25.937
5	-0.03443	25.937
6	-0.03862	25.937
7	-0.04146	25.937
8	-0.03320	25.937
9	-0.03410	25.937
...
991	-0.01992	25.937
992	-0.02433	25.937
993	-0.03527	25.937
994	-0.03398	25.937
995	-0.02294	25.937
996	-0.02935	25.937
997	-0.03382	25.937
998	-0.04626	25.937
999	-0.05162	25.937

Register Dump:
REG[0xA1] > 0x21
REG[0xA2] > 0x6
REG[0xA3] > 0x0
REG[0xA4] > 0x1C
REG[0xA8] > 0x19F0
REG[0xAA] > 0xFFFC92
REG[0xAB] > 0x5
REG[0xBC] > 0x4B

Done.
```

## Three Gyro Example

```
Platform: Normal Arduino
Open SPI Port for Epson device: nCS on 4 @ 5000000 Hz
**Reset**
**Init Gyro**
----------------------
XV7021 Slave ID: 0
High Pass Filter: Off
HPF Fc: 0.1 Hz
Notch Filter: Off
LPF Order: 2nd
LPF Fc: 100 Hz
EnbCalibCmd: Disable
Sampling Rate: Fs=FULL
Temperature Data Format: 12-bit
Gyro SF: 0.00005580
TempC SF: 0.06250000
----------------------

GlobalAngularRateRead
=================
Sample#	Gx	Gy	Gz
0, -0.07299, -0.05792, 0.03064
1, -0.07734, -0.06390, 0.02690
2, -0.07561, -0.05033, 0.01334
3, -0.06618, -0.04085, -0.00485
4, -0.05407, -0.07969, -0.01886
5, -0.01691, -0.11557, -0.00039
6, 0.01814, -0.11847, -0.00932
7, -0.00586, -0.09079, -0.00999
8, -0.01680, -0.05937, 0.00268
9, -0.02628, -0.05781, 0.02070
...
990, -0.03912, -0.06077, -0.00251
991, -0.03170, -0.08493, -0.01094
992, -0.02773, -0.11055, -0.01563
993, -0.04643, -0.10485, -0.01462
994, -0.09509, -0.06847, -0.00564
995, -0.11116, -0.04286, -0.02433
996, -0.08421, -0.04816, -0.00407
997, -0.06004, -0.09146, -0.02433
998, -0.05647, -0.12427, -0.02461
999, -0.07054, -0.11384, -0.00675

Done.


```

# Change Record:

| Date       | Ver  | Comment           |
| ---------- | ---- | ----------------- |
| 2026-01-16 | v1.0 | - Initial release |
