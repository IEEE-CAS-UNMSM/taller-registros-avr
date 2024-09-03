#include <stdio.h>
void mostrarBits(unsigned int valor, int nibbles);
        
int main(){
    unsigned int a = 0b0000101100101100;
        
    printf("\t\t  DEC\t HEX\t\tBIN\n");
    printf("a: \t\t%5d\t%4X\t",a,a), mostrarBits(a, 4);
        
    printf("(a<<2): %5d\t%4X\t",a<<2,a<<2);
    mostrarBits(a << 2, 4);
        
    printf("(a>>1): %5d\t%4X\t",a>>1,a>>1);
    mostrarBits(a >> 1, 4);
        
    printf("(a<<4): %5d\t%4X\t",a<<4,a<<4);
    mostrarBits(a << 4, 4);
            
    printf("(a>>3): %5d\t%4X\t",a>>3,a>>3);
    mostrarBits(a >> 3, 4);
}
        
void mostrarBits(unsigned int valor, int nibbles){
    unsigned int mascara = 1 << (4*nibbles-1);
    for (unsigned int c = 1; c <= 4*nibbles; ++c) {
        putchar(valor & mascara ? '1' : '0'), valor <<= 1;
        if (c % 4 == 0) {putchar(' ');}
    }
    putchar('\n');
}