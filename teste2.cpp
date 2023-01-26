#include<stdio.h>
#include<locale.h>

int main (){
	
	setlocale(LC_ALL,"Portuguese_Brazil");
	float notas[10],soma,media;

	
	for(int i=0; i<10;i++){
		
	printf("Digite a %d nota: ", i+1);
	scanf("%f",&notas[i]);
	soma = soma+notas[i];

	}
	
	media = soma/10;

	printf("\nA média da turma é %.1f\n",media);
	
		
}

