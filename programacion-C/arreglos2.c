#include <stdio.h>
int main()
{
    int b[4] = {10, 20, 30, 40};     
    int *bPtr = b;                
    puts("Valores en el arreglo");
    for(int i= 0; i <4; ++i){
    printf("b[%u] = %d\n", i, b[i]);
    }
    puts("");
    puts("Valores desde la dirección");
    for (int offset = 0; offset < 4; ++offset){
        printf("*(b + %u) = %d\n", offset, *(b + offset));
    }
}