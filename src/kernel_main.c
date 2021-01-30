#include <stdio.h>
// #include "list.h"

extern long __bss_start;
extern long __bss_end;
void bss_to_zero(){
	char *begin_bss =  & __bss_start;
	char *end_bss   = & __bss_end;
	
}
void kernel_main() {
	bss_to_zero() ;
    while(1){
    }
}
