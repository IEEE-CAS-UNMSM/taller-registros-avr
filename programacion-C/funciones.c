#include <stdio.h>
//MOdificaciones
void xLocal(void);         //Prototipo
void xLocalStatic(void);
void xGlobal(void);
        
int x = 1; // Valor global
int main(){
    int x = 5; //Valor en el loop principal
    printf("Variable x dentro de main es: %d\n", x);
    {
        int x = 7; //Valor en un espacio {} 
        printf("Variable x dentro de un espacio es: %d\n", x);
    }
    printf("Variable x dentro de main es: %d\n", x);
    xLocal(); 
    xLocalStatic();
    xGlobal();
    xLocalStatic();
    xGlobal();
    xLocal(); 
    printf("Variable x dentro de main es: %d\n", x);
}
        
void xLocal(void){
    int x = 25;
    printf("\n %d: Valor de x dentro de la funcion xLocal",x);
    ++x;
    printf("\n %d: Valor de x dentro de la funcion xLocal",x);
}
        
void xLocalStatic(void){
    static int x = 50;
    printf("\n %d: Valor de x dentro de la funcion xLocalStatic",x);
    ++x;
    printf("\n %d: Valor de x dentro de la funcion xLocalStatic",x);
}
        
void xGlobal(void){
    printf("\n %d: Valor de x Global del archivo",x);
    x *= 10;
    printf("\n %d: Valor de x Global del archivo",x);
}