#include <stdio.h>
int main(){
    int numero_1 = 32;
    int numero_2 = 0b10010110;
    int numero_3 = 0x1F;
            
    printf("Decimal\tHexadecimal\n");
    printf("%4d\t\t%X\n", numero_1, numero_1);
    printf("%4d\t\t%X\n", numero_2, numero_2);
    printf("%4d\t\t%X", numero_3, numero_3);
}