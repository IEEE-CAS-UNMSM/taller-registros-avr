#include <stdio.h>
    int main(void){
    int n[5] = {11,25,7,36,99};
    printf("%s\t%s\n","Posición", "Valor");
    for (int i=0; i < 5; ++i)
        printf("\t%d\t\t  %d\n", i, n[i]); 
    }