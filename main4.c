#include <stdio.h>
#include <stdlib.h>
   int main(){
   int aprovados = 0 , reprovados = 0;
   int numAlunos, i;
   printf("Informe quantos alunos serao avaliados:");
   scanf("%d", &numAlunos);

   for ( i = 0; i < numAlunos; i++) {
      printf("\n %d Aluno", i);
   }

    float notas[5];
   printf("\n Informe a nota 1:");
   scanf("%f", &notas[0]);
   printf("\n Informe a nota 2:");
   scanf("%f", &notas[1]);
   printf("\n Informe a nota 3:");
   scanf("%f", &notas[2]);
   printf("\n Informe a nota 4:");
   scanf("%f", &notas[3]);
   printf("\n Informe a nota 5:");
   scanf("%f", &notas[4]);
   float soma = notas[0] + notas[1] + notas[2] + notas[3] + notas[4];
   float media = soma / 5;
   
   printf("\n A media e: %f", media);

   if (media >= 6){
      printf("\n Aluno aprovado.");
   }
   else{
      printf("\n Aluno reprovado.");
   }
}