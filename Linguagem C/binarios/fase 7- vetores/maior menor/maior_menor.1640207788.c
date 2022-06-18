#include<stdio.h>
main(){
	int aluno[]={23,46,86,34,6,8,65,1,12,45,69,8,345,2,37,678,43,3,576,231,67}, menor=1000, maior=0;
	for(int x=0;x<22;x++){
		if(aluno[x]>=maior){
			maior=aluno[x];
		}
		else if(aluno[x]<=menor){
			menor=aluno[x];
		}
		}
		printf("O maior numero e: %i\n", maior);
		printf("O menor numero e: %i", menor);
	}
