#include<stdio.h>

main(){
	while(1){
		float n1,n2,n3,n4, media;
		printf("Insira o valor na primeira nota: ");
		scanf("%f", &n1);
		printf("Insira o valor da segunda nota: ");
		scanf("%f",&n2);
		printf("Insira o valor da terceira nota: ");
		scanf("%f", &n3);
		printf("Insira o valor da quarta nota: ");
		scanf("%f",&n4);
		media=(n1+n2+n3+n4)/4;
		if(media>=7)
		printf("Aluno aprovado com nota %.2f\n\n", media);
		else
		printf("Aluno reprovado com nota %.2f\n\n",media);
	}
}