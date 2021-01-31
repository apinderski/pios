#include <stdio.h>
#include "list.h"

extern long __bss_start;
extern long __bss_end;

void kernel_main(){
	bss_to_zero();
	struct list_element b = {NULL,NULL, 1};
	struct list_element a = {NULL,NULL, 5};
	struct list_element c = {NULL,NULL, 2};
	struct list_element *head = &a; //*=dereference &=reference
	list_add(head, &b);
	//list_remove(head, 0);
	while (1){
	}
}

void bss_to_zero(){
	char *begin_bss = & __bss_start;
	char *end_bss   = & __bss_end;
	begin_bss[0] = 0x0c;
	int x=0;
	while ((&__bss_start)+x != &__bss_end){
		begin_bss[x] = 0;
		x++;
	}
}
