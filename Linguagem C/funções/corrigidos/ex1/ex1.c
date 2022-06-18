#include<stdio.h>
//protótipos das funções
int soma(v1);

//declaração da main
	void main(void) {
	int n,res;
//execução do programa
	printf("Informe o valor: ");
	scanf("%i", &n);
	res=soma(n);
	printf("%i",res);
	return;
}
//função soma
int soma(int v1) {
	int resultado;
	resultado = v1+20;
	return(resultado);
}