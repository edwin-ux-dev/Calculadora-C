#include <stdio.h>

float sumar(float a , float b){
    return a + b;
}

float restar(float a, float b){
    return a -b;
}

float multiplicar(float a , float b){
    return a * b;
}

float dividir(float a , float b){
    if(b!=0 ){
        return a / b;
    }else{
        printf("Error: No se puede dividir por cero");
        return 0;
    }
}

int main(){
    float num1, num2;
    char operation;

    printf("Ingrese el primer numero: ");
    scanf("%f", &num1);

    printf("ingrese el segundo numero :");
    scanf("%f", &num2);

    printf("ingrese la operacion(+, -, *, /):");
    scanf(" %c", &operation);

    switch(operation) {
        case '+':
        printf("resultado: %.2f\n", sumar(num1 , num2));
        break;
        case '-':
        printf("resultado: %.2f\n", sumar(num1 , num2));
        break;
        case '*':
        printf("resultado: %.2f\n", sumar(num1 , num2));
        break;
        case '/':
        printf("resultado: %.2f\n", sumar(num1 , num2));
        break;
        default:
        printf("operacion no valida.\n");
        break;
    }
    return 0;
}

