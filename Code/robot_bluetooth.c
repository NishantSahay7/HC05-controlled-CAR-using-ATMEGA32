/////////////////////////////////////////////////////////////////////////////////////////////////////
///  Project Name : robot_bluetooth
//
//  Target Board : atmega32
//
//  Date Created : 03-10-2017 17:40:38
// 
//  Online Resource  : www.electronicsforstudents.com
//
//  Libraries Included : 
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<avr/io.h>
#include<util/delay.h>


#include "serial.h"
#include "adc.h"


int main()	//note: for this program, 1st connect the Bluetooth setup, then the Bluetooth will blink continuously, then see the no written behind, and then pair it with your phone with the device name same as the no, enter the pin as 1234, now once paired download the app called Bluetooth Serial Controller, open it you will see buttons named DEF, go to "Preferences", then go to "Name", then give the name to the buttons, for ex Give ON to button 1 and off to the Button 2 and then,go bAck you should see the names on the button,adn then go to again Preferences,  then in Command and chnange the Button 1 and Button 2 to some alphabet like A, B resp,this A, B is the value which we want to compare with so as to give
{
	
	serial_init(9600);
	serial_select(1);
	
	while (1)
	{
	char a;
	a=serial_read();	//it reads only one character,remember it
	
	if(a=='A')	//this compares the value which we wrote in the command in each button,
	{
	write(portd,4,h);
	write(portd,5,l);
	
	write(portd,6,h);
	write(portd,7,l);
	}

	if(a=='B')
	{
	write(portd,4,l);
	write(portd,5,h);
	write(portd,6,l);
	write(portd,7,h);
	
	}
	
	if(a=='C')
	{
	write(portd,4,l);
	write(portd,5,h);
	write(portd,6,h);
	write(portd,7,l);
	
	}
	
		if(a=='D')
	{
	write(portd,4,h);
	write(portd,5,l);
	write(portd,6,l);
	write(portd,7,h);
	
	}
		if(a=='E')
	{
	write(portd,4,l);
	write(portd,5,l);
	write(portd,6,l);
	write(portd,7,l);
	
	}


	}

}