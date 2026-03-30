#include <stdio.h>

int main (){
    float N1, N2, soma;
    
    printf("qual o primeiro numero?: ");
    scanf("%f", &N1);
    
    printf("qual o segundo numero?: ");
    scanf("%f", &N2);
    
    soma = N1 + N2;
    
    printf("%.2f + %.2f = %.2f", N1, N2, soma);
    
    return 0;
}
