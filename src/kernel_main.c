
void bss_to_zero();
extern int __bss_start;
extern int __bss_end;
#include "list.h"
#include "blinky.h"
#include "rprintf.h"
#include "serial.h"
int global;
#define NULL (void*)0
struct list_element b = {NULL,NULL, 1};
struct list_element a = {NULL,NULL, 5};
struct list_element c = {NULL,NULL, 2};
struct list_element *head = &a;
struct list_element* list = &a;


void kernel_main(){
	/*
	bss_to_zero();
	list_add(list, &b);ß
	list_add(list, &c);
	list_remove(head, 1); 
	*/
	//int *mu_io_reg = 0x7E215040;
	//led_init();
	esp_printf(putc, "Hi Jack %x", kernel_main);
	while (1){
		//led_on();
		//delay();
		//led_off();
		//delay();
		
	}
}
//HW1
void bss_to_zero(){
	(&__bss_start)[0] = 0x0c;
	int x=0;
	while ((&__bss_start)+x != &__bss_end){
		(&__bss_start)[x] = 0;
		x++;
	}
}



	
