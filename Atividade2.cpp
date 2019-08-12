#include <stdio.h> 
//#include <string.h>

typedef struct{
	int matricula;
	double nota;
}PESSOA;


int main (void){
	int i, estudantes;
	
	PESSOA aluno[estudantes]; //Array de alunos
	
	printf("Informe o número de estudantes:");
	scanf("%i",&estudantes);
	//Entrada de dados
	for (i = 0 ; i < estudantes ; i ++){
		printf("infome nome ");
		scanf("%s", &aluno[i].matricula); // gets(matricula);
	
		printf("infome Matricula ");
		scanf("%lf", &aluno[i].nota); // gets(nota);
	}
	
	printf("%i %lf",aluno[1].matricula,aluno[1].nota);
}



