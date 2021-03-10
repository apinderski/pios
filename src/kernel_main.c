void bss_to_zero();
extern int __bss_start;
extern int __bss_end;
extern struct ppage* free_list;
#include "list.h"
#include "blinky.h"
#include "rprintf.h"
#include "serial.h"
#include "page.h"
int global;
#define NULL (void*)0

void kernel_main(){
	//worked with Haris and followed along with Neil's instruction in class
	init_pfa_list();
	struct ppage* test = free_list->next;
	esp_printf(putc, "Physcial addr:  %x \n", test->physical_addr);
	test = allocate_physical_pages(2);
	esp_printf(putc, "physical pages -->  %x \n", test);
	esp_printf(putc, "physical pages -->  %x \n", test->physical_addr);
	free_physical_pages(test);
	test = free_list->next;
	esp_printf(putc, "After freeing:  %x \n", test->physical_addr);
	while (1){
		
	}
}
//old hw
void bss_to_zero(){
	(&__bss_start)[0] = 0x0c;
	int x=0;
	while ((&__bss_start)+x != &__bss_end){
		(&__bss_start)[x] = 0;
		x++;
	}
}

