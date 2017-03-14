# include "stdio.h"

#define PUL_CM 2.54
#define YAR_CM 91.44
#define PIE_PUL 12
#define MT_CM 100

int main(){
    int pies=readnumber();
    
    double pulgadas = pies* PIE_PUL;
    
    printf("%d pies son %f pulgadas\n", pies, pulgadas);
    
    double centimetros=pulgadas* PUL_CM;
    printf("%d pies son %f centimentro\n", pies, centimetros);
    
    double yardas=centimetros / YAR_CM;
    printf("%d pies son %f yardas\n", pies, yardas);
    
    double metros=centimetros / MT_CM;
    printf("%d pies son %f metros\n", pies, metros);
    
}

int readnumber(){
    printf("Ingrese los pies: ");
    int result;
    scanf("%d", &result);
    
    return result;
    
}

