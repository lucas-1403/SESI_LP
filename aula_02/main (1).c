
#include <stdio.h>

int main(){
  int num1, num2;
  
  printf("digite primeiro numero: ");
  scanf("%i", &num1);
  
  printf("digite segundo numero: ");
  scanf("%i", &num2);
  
  if(num1 % num2 == 0){
      printf("%i é multiplicavel por %i", num1, num2);
  }else{
      printf("não é multiplicavel ");
  }
}