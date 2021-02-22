unsigned int *gpset1 = 0xFE200020; 
unsigned int *gpsel4 = 0xFE200010;
unsigned int *gpclr1 = 0xFE20002C;

void led_init(){
	unsigned int mask_number = 0xFFFFFE3F; 
	*gpsel4 = *gpsel4 & mask_number; 
	*gpsel4 = *gpsel4 | (1 << 6); 
	return;
}
//Turns the LED on by writing a 1 to GPIO pin 42
void led_on(){
	*gpset1 = (1 << 10);
}

//Turns the ACT LED off by writing a 0 to GPIO pin 42
void led_off(){
	*gpclr1 = (1 << 10);
	
}

void delay(){
	unsigned int x = 0;
	for (x; x < 100000; x++){
		asm("NOP");
	} //1 second delay
}
