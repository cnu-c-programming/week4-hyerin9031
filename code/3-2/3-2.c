#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void swap_endian(int *x) {
    char* addr = (char*)&(*x);
    char* tmp;
    sprintf(tmp, "%x%x%x%x", *addr, *(addr+1), *(addr+2), *(addr+3));
    *x = strtol(tmp, NULL, 16);
    
}

int main() {
    int x = 0x12345678;

    printf("%x\n", x);
    swap_endian(&x);
    printf("%x\n", x);

    return 0;
}
