#include <reg52.h> // including the header file for AT89c52 microntrollers

//Delay function
void delay(int time){
	int i,j;
	for(i=0;i<time;i++)
			for(j=0;j<1275;j++);
}

sbit led =  P0^0; // creating an led variable and assigning to pin P0.0

void main()	
{
	//setup
	P0 = 1; // port0 as OUTPUT

	// loop
	while(1)
	{ 
		led = 1;      // led on
		delay(100);   // wait for a second
		led = 0;      // led off
		delay(100);   // wait for a second
	}
}