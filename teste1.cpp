#include<stdio.h>

int main (){
	
	float notas[5];
	
	for(int i=0; i<5;i++){
		
	printf("Digite a %d nota: ", i+1);
	scanf("%f",&notas[i]);

	}
	
	for	(int i=0; i<5;i++){
		
	printf("\nA %d nota eh: %.1f\n", i+1,notas[i]);
	
		
}
}
