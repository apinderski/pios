

void clear_kernel(){
char *begin_bss = &__bss_start ;
char *end_bss = &__bss_end ; 
for(int i = __bss_start; i < __bss_end; i++){
	*i=0;
}
}

int main(){
	clear_kernel();
	return 0;
}




void kernel_main() {

    while(1){
    }
}
