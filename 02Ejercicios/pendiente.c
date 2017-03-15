# include "stdio.h"

int main (){
    double pendiente; 
    int x1;
    int x2;
    int y1;
    int y2;
    
    printf("Ingrese x1: ");
    scanf("%d", &x1);
    
    printf("Ingrese x2: ");
    scanf("%d", &x2);
    
    printf("Ingrese y1: ");
    scanf("%d", &y1);
    
    printf("Ingrese y2: ");
    scanf("%d", &y2);
    
    
    double restaY= y2-y1;
    
    double restaX=x2-x1;
    
    pendiente= restaY/restaX;
    
    printf("la pendiente es: %f", pendiente);

}

