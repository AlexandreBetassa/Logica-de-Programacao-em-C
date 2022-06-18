#include<stdio.h>
//declaração das funções
float soma(float v1,float v2);
float sub(float v1,float v2);
float div(float v1,float v2);
float mul(float v1,float v2);

// função principal
int main() {

	float n1=0,n2=0,res=0;
	int fun;
	//execução da função
	printf("Selecione a funcao matematica que deseja executar:\n1-soma\n2-subtracao\n3-divisao\n4-multiplicacao\n5-sair\n\nvalor: ");
	scanf("%i", &fun);
	//imprimindo função escolhida
	if(fun<1||fun>5) {
		printf("Invalido, selecione um valor informado!!!\n\n");
	} else {
		if(fun==1) {
			printf("Soma\n");
		} else if(fun==2) {
			printf("Subtracao\n");
		} else if(fun==3) {
			printf("Divisao\n");
		} else if(fun==4) {
			printf("Multiplicacao\n");
		} else if(fun==5) {
			printf("Sair\n");
			return ;
		}
	}
//pedindo valores
	printf("Digite o valor 1: " );
	scanf("%f",&n1);
	printf("Digite o valor 2: " );
	scanf("%f",&n2);

//se fun==1 soma
	if(fun==1) {
		res=soma(n1,n2);

		//se fun==2 subtrai
	} else if(fun==2) {
		res=sub(n1,n2);

		//se fun==3 divide
	} else if(fun==3) {
		res=div(n1,n2);

		//se fun==4 multiplica
	} else if(fun==4) {
		res=mul(n1,n2);
		//se fun==5 sair
	}
//imprimindo resultado
	printf("%.2f", res);
}

// funções
//soma
float soma(float v1, float v2) {
	float resultado;
	resultado=v1+v2;
	return (resultado);
}
//subtração
float sub(float v1, float v2) {
	float resultado;
	resultado=v1-v2;
	return (resultado);
}
//divisão
float div(float v1, float v2) {
	float resultado;
	resultado=v1/v2;
	return(resultado);
}
//multiplicação
float mul(float v1, float v2) {
	float resultado;
	resultado=v1*v2;
	return(resultado);
}