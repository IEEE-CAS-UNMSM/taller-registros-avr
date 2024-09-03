#include <stdio.h>
int main(){
int x = 10;
int *xPtr = &x;
printf("La direccion de x es: %p\nEl valor que apunta *xPtr es %p", &x, xPtr);
printf("\n\nEl valor de x es: %d\nEl valor que apunta *xPtr es %d", x, *xPtr);
}