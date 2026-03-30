#include <stdio.h>

int main (){
    int N1;
    int N2;
    
    printf("qual o primeiro numero?: ");
    
    scanf("%i", &N1);
    
    printf("qual o segundo numero?: ");
    
    scanf("%i", &N2);
    
    printf("seus numeros somados são: %i", N1 + N2);
    
    return 0;
}
