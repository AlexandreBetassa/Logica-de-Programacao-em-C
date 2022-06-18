#include<stdio.h>

main() {
	while(1) {
		int maior=0,menor=1000,aluno[21]= {23,46,86,34,6,8,65,1,12,45,69,8,345,2,37,678,43,3,576,231,67};
		while(aluno>maior) {
			maior=aluno;
			while(aluno<menor) {
				menor=aluno;
			}
		}
	}
	printf("O maior numero e: %i\n",aluno);
	printf("O menor numero e: %i",aluno);
}