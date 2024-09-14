# Getting Started with 89s52 Microcontroller Development

<div align = "justify">

This guide will help you set up your environment and get started with programming the 89s52 microcontroller. We will cover:
- Installing Keil uVision IDE
- Writing your first program
- Compiling to a HEX file
- Simulating with Proteus or flashing directly to the IC

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