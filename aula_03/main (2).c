#include <stdio.h>

int main() {
    float N1_A1, N2_A1, N3_A1, N1_A2, N2_A2,N3_A2;
    float M_A1, M_A2;
    
    printf("primeira nota do aluno 1: ");
    scanf("%f", &N1_A1);
    
    printf("segunda nota do aluno 1: ");
    scanf("%f", &N2_A1);
    
    printf("terceira nota do aluno 1: ");
    scanf("%f", &N3_A1);
    
    printf("primeira nota do aluno 2: ");
    scanf("%f", &N1_A2);
    
    printf("segunda nota do aluno 2: ");
    scanf("%f", &N2_A2);
    
    printf("terceira nota do aluno 2: ");
    scanf("%f", &N3_A2);
    
    M_A1 = (N1_A1 + N2_A1 + N3_A1) / 3;
    
    M_A2 = (N1_A2 + N2_A2 + N3_A2) / 3;

    if (N1_A1 >= N2_A1 && N1_A1 >= N3_A1) {
        printf("maior nota: %.1f", &N1_A1);
    } else if (N2_A1 >= N1_A1 && N2_A1 >= N3_A1) {
        printf("maior nota: %.1f", &N2_A1);
    } else {
        printf("maior nota: %.1f", &N3_A1);
    }
    
    if (M_A1 >= 7.0) {
        printf("aprovado");
    } else if (M_A1 < 6.9) {
        printf("recuperação");
    } else {
        printf("reprovado");
    }
}
