# Getting Started with 89s52 Microcontroller Development

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

## 2. Writing Your First Program

Once your project is set up:

1. In Keil, create a new file and save it with a `.c` extension (e.g., `main.c`).
2. Write a simple program like this to blink an LED:
   ```c
   #include <reg52.h>
   
   sbit LED = P2^0; // LED connected to port 2.0

   void delay() {
       int i, j;
       for (i = 0; i < 1000; i++)
           for (j = 0; j < 100; j++);
   }

   void main() {
       while (1) {
           LED = 0;  // Turn ON
           delay();
           LED = 1;  // Turn OFF
           delay();
       }
   }
