#include <stdio.h>
#include <math.h>

int main()
{
    int idade;
    printf(" digite idade");
    scanf("%d", &idade);
    if(idade<=12 && idade>0){
        printf("criança");
    }else if(idade>=13 && idade<=17){
        printf("adolescente");
    }else if(idade>=18 && idade<=59){
        printf("adulto");
    }else if(idade>60){
        printf("idoso");
    }else{
        printf("idade invalida");
    }
    
    return 0;
}