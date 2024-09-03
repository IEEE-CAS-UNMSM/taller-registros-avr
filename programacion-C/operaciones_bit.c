#include <stdio.h>
void mostrarBits(unsigned int valor, int nibbles);

int main(){
    unsigned int a = 0b1100, b = 0b0011;
    printf("\na: "),mostrarBits(a,1);
    printf("b: "),mostrarBits(b,1); 
    printf("Operador &: "),mostrarBits(a & b,1); 

    a = 0xA,b = 0b10100001;
    printf("\na: "),mostrarBits(a,2);
    printf("b: "),mostrarBits(b,2); 
    printf("Operador |: "),mostrarBits(a | b,2); 

    a = 63, b = 199;
    printf("\na: "),mostrarBits(a,2);
    printf("b: "),mostrarBits(b,2); 
    printf("Operador ^: "),mostrarBits(a ^ b,2); 

    a = 0b11010;
    printf("\na: "),mostrarBits(a,2);
    printf("Operador ~: "),mostrarBits(~a,2); 
}

void mostrarBits(unsigned int valor, int nibbles)
{
    unsigned int mascara = 1 << 4*nibbles-1;
    for (unsigned int c = 1; c <= 4*nibbles; ++c) {
        putchar(valor & mascara ? '1' : '0'), valor <<= 1;
    }
    putchar('\n');
}