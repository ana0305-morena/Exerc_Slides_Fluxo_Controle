#include <stdio.h>

int main(){
    float n1, n2;
    char operador;
    
    printf("Digite dois números e um operador (+, -, *, /): ");
    scanf("%f %f %c", &n1, &n2, &operador);
    
    switch(operador){
        case '+':
            printf("%.2f", n1+n2);
        break;
        case '-':
            printf("%.2f", n1-n2);
        break;
        case '*':
            printf("%.2f", n1*n2);
        break;
        case '/':
            printf("%.2f", n1/n2);    
        break;
        default:
            printf("Operador inválido");   
        break;
    }

    return 0;
}
