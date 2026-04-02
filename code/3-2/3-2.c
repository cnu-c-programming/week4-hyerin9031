#include <stdio.h>

void swap_endian(int *x) {
    unsigned int addr = (unsigned int)*x;
   *x = ((addr >> 24) & 0x000000FF) | ((addr >> 8) & 0x0000FF00) | ((addr << 8) & 0x00FF0000) | ((addr << 24) & 0xFF000000);

}

int main() {
    int x = 0x12345678;

    printf("%x\n", x);
    swap_endian(&x);
    printf("%x\n", x);

    return 0;
}
