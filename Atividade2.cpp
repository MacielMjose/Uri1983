#include <stdio.h> 
//#include <string.h>

typedef struct{
	int matricula;
	char nome[30];
	
}PESSOA;


int main (void)
{
	PESSOA aluno[100]; // variavel instanciada do tipo PESSOA
	
	int i, estudantes;
	int index = 0;
	
	printf("Informe o número de estudantes:");
	scanf("%i",&estudantes);
	
	for (i = 0 ; i < estudantes ; i ++)
	
	{
			
		printf("infome nome ");
		scanf("%s", &aluno[index].nome); // gets(nome);
	
		printf("infome Matricula ");
		scanf("%i", &aluno[index].matricula); // gets(nome);
		
		index ++;
				
	
	}
	
	
	
	
	printf("%i %s",aluno[1].matricula,aluno[1].nome);
	
}



