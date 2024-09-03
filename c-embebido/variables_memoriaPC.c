#include <stdio.h>
    int main(){
        float flotante = 7.08;
        double doble = 12.34567;
        unsigned int entero = 3;
        unsigned char letra = 'a';
        unsigned int arreglo_entero[3] = {0};
        unsigned long long arreglo_ll[3] = {0};
        
        printf("Dirección del float:\t %p\t Tamaño: %2d", &flotante, sizeof(float));
        printf("\nDirección del double:\t %p\t Tamaño: %2d", &doble, sizeof(double));
        printf("\nDirección del int:\t\t %p\t Tamaño: %2d", &entero, sizeof(int));
        printf("\nDirección del char:\t\t %p\t Tamaño: %2d", &letra, sizeof(char));
        printf("\nDirección arreglo_int:\t %p\t Tamaño: %2d", &arreglo_entero, sizeof(arreglo_entero));
        printf("\nDirección arreglo_ll:\t %p\t Tamaño: %2d", &arreglo_ll, sizeof(arreglo_ll));
    }