#include <stdio.h>

int main (){
   float nota1, nota2, nota3, media;
   
   printf("coloque primeira nota: ");
   scanf("%f", &nota1);
   
   printf("coloque segunda nota: ");
   scanf("%f", &nota2);
   
   printf("coloque terceira nota: ");
   scanf("%f", &nota3);
   
   media = (nota1 + nota2 + nota3) / 3;
   
   printf("%.1f + %.1f + %.1f / 3 = %.1f : ", nota1, nota2, nota3, media );
   
   if(media >= 7.0){
       printf("APROVADO");
   }else if(media <= 6.9){
       printf("RECUPERAÇÃO");
   }else{printf("REPROVADO");}
}
