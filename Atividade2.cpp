#include <stdio.h>
int main (){
	int i, matraux = 0, estudantes;
	float naux;
	scanf("%d",&estudantes);
	int matricula[estudantes];
	float nota[estudantes];
	for (i = 0 ; i < estudantes ; i ++){
		scanf("%d %f", &matricula[i], &nota[i]);
	}
	for(i = 0; i < estudantes; i++){
		if(nota[i] >= 8){
			if(nota[i] > naux){
				naux = nota[i];
				matraux = matricula[i];
			}
		}
	}
	if(matraux > 0){
		printf("%d\n", matraux);
	}else{
		printf("Minimum note not reached\n");
	}
	return 0;
}
