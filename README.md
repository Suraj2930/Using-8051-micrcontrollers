# Using 8051 micrcontrollers
***Here we will make projects using 89s52 microcontroller.***
----

<div align ="justify">

<img align = "right" width="150" height="100" src="./Docs/Cover.jpg">

----
Welcome to my GitHub repository dedicated to building innovative and practical projects using the **89s52 microcontroller** 
from the 8051 family. This collection of projects is designed to help both beginners and enthusiasts explore the capabilities of 
this popular microcontroller and dive into real-world embedded systems development.

----

## 🎯 Purpose of the Repository
This repo aims to:
- Showcase projects and implementations with the **89s52 microcontroller**.
- Offer reusable code snippets and libraries for various peripherals.
- Provide step-by-step guidance to help others learn how to work with the 89s52.
- Collaborate on new ideas and improvements for embedded systems design.

## 🚀 Featured Projects
Some of the key projects you'll find here:
- **LED Blinking**: Learn how to control LEDs.
- **LCD Displays**: Display Text on LCD display.
- **Temperature and Humidity Monitoring System**: Integrate sensors like DHT11 for environmental monitoring.
- **Motor Control using UART**: Control motors via UART communication and Bluetooth (HC-05).
- **Real-time Clock (RTC) with 4-Digit Seven-Segment Display**: Interface a DS1307 RTC module for time-keeping applications.

> More projects and updates will be added regularly !  [See the project list](#projects). 

## 🛠 Tools and Technologies
- **89s52 Microcontroller**
- **Keil uVision IDE**
- **Embedded C/C++**
- **Modules** (LCD, motors, sensors, Bluetooth, etc.)

## 💡 How to Use This Repository
- **Clone the repository** and start experimenting with the provided code.
- **Review the README.md** files in each project folder for detailed instructions.
- **Check out the Wiki** (coming soon) for deeper insights and tutorials.
- **Contribute**: Found a bug or have a feature request? Feel free to open an issue or contribute with pull requests.

## 📚 Documentation & Resources
- **89s52 Microcontroller Datasheet** : [Link to the datasheet](https://www.datasheetarchive.com/AT89S52-datasheet.html)
- **Getting Started with Keil IDE and Proteus** : [Read the guide here.](#getting-started-with-89s52-microcontroller-development)

## 💬 Connect & Contribute
- **Open Issues**: If you encounter any problems or have suggestions, create an issue.
- **Fork the Repo**: Want to contribute? Fork the repo and submit your pull requests!
- **Follow**: Stay updated by watching the repo and following me on GitHub for new project releases!

----
</div>

# Getting Started with 89s52 Microcontroller Development

This guide will help you set up your environment and get started with programming the 89s52 microcontroller. We will cover:
- Installing Keil uVision IDE.
- Writing your first program.
- Compiling to a HEX file.
- Simulating with Proteus or flashing directly to the IC.

<div align ="justify">

## 1. Installing Keil uVision IDE

Follow these steps to install the Keil uVision IDE:

1. Visit the [Keil Website](https://www.keil.com/download/product/) and download the appropriate version for your system.
2. Run the installer and follow the on-screen instructions to complete the installation.
3. Once installed, open Keil uVision and set up the **89s52** target device by selecting `Project` > `New uVision Project...` and choosing the **AT89S52** microcontroller from the device list.

## 2. Writing Your First Program in Keil

1. In Keil, create a new project and open a new document and save it with a `.c` extension (e.g., `YourCodeName.c`).
2. Write a program.
3. Add `.c` file to the source group.
4. Go to options for target using `ALT+F7` or right click on the `Target` option.  
5. Switch to `OUPUT` tab & check create `.hex` file.
6. Build target using `F7` or right click on the `Build` option.
7. A `.HEX` file will be created in the project folder.

## 3. Making a Proteus project 

1. Go to `File` create a `New Project`.
2. Add components by using `P` on the keyboard or Go to `component mode` in the `tool bar` on the left.
3. Connect all the components according to the diagram.
4. You can find label for `VCC,GND` and other in the `terminals mode` in the `tool bar`.
5. Component values can be updated by double-clicking on the components.
6. When all connections are done, we need to uplaod the code.
7. Double-click the `Micro-controller IC` and either paste the path or you can browse to the path of the `.HEX` file created above.

</div>

# Projects 

1. [LED_Blink](./Projects/LED_Blink/LED_Blink.md)
2. [LCD_Display](./Projects/Lcd_Display/Lcd_Display.md)
3. [Seven_Segment_Display](./Projects/Seven_Segment_Display/Seven_Segment_Display.md)
4. [Serial_Communication](./Projects/Serial_Communication/Serial_Communication.md)

----

## 🌟 Support the Project

> If you find this repository useful, please **star it** ⭐ and **share it** 📨 with others!  Your support helps keep this project going.

----

Let's learn and build together with the 8051 microcontroller family! 👨‍💻👩‍💻