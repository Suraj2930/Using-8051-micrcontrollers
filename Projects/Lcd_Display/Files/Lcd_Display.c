#include <reg52.h>

#define lcd_port P2 // port where lcd pins are connected

sbit rs=P3^0;   // Register select pin
sbit rw=P3^1;   // read/write pin
sbit en=P3^2;   // enable pin

// function definitions
void lcd_init();
void lcd_cmd(unsigned char command);
void lcd_data(unsigned char disp_data);
void lcd_print(unsigned char *text);
void delay(unsigned int time);

//Initialize the lcd dsiplay
void lcd_init() {
		lcd_cmd(0x01);     // 1. clear display  
		lcd_cmd(0x38);     // 2. set to 8-bit, 2 line, 5x7 dots
		lcd_cmd(0x0c);     // 3. display on, cursor off
        lcd_cmd(0x06);     // 4. Increment Cursor (shift left to right)
        lcd_cmd(0x80);     // 5. set cursor to first line
}

// sends commands to lcd
void lcd_cmd(unsigned char command) { 
    lcd_port=command;
    rs=0;
    rw=0;
    en=1;
    delay(1);
    en=0;
}

// sends data to lcd
void lcd_data(unsigned char disp_data) { 
    lcd_port=disp_data;
    rs=1;
    rw=0;
    en=1;
    delay(1);
    en=0;
}

//prints TEXT on the lcd
void lcd_print(unsigned char *text) { 
    while(*text) {
        lcd_data(*text++);
    }
}

// delay function
void delay(unsigned int time) { 
    unsigned int i,j;
		for(j=0;j<time;j++)
			for(i=0;i<=1275;i++);
}


void main() {
    lcd_init();
		lcd_cmd(0x80);
		lcd_print("Hello World");  // print: Hello World
	while(1){
	}
}