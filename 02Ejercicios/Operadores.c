# include "stdio.h"

void restanumeros (int n1, int n2);
void divirnumeros(int n1, int n2);
void residuo(int n1, int n2);

int main() {
    int number1=readnumber();
    int number2=readnumber();
    
    restanumeros(number1, number2);
    divirnumeros(number1, number2);
    residuo(number1, number2);
    
    return 0;

}
    
int readnumber(){
    printf("Ingrese un numero");
    int result;
    scanf("%d", &result);
    
    return result;
    
}

void restanumeros (int n1, int n2) {
    int residuo=n1-n2;
    printf("resultado es %d\n", residuo);
    
}


void divirnumeros(int n1, int n2) {
   int resultado=n1/n2;
   printf("la division es: %d\n", resultado);
    
}

void residuo(int n1, int n2) {
    int residuo=n1%n2;
    printf("el residuo es: %d\n", residuo);
    
}

