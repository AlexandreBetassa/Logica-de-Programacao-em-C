#include<stdio.h>

int main(void) {
	while(1){
	float x;	
	printf("Por favor digite um numero: ");
	scanf("%f", &x);
	if(x==0) {
		printf("Esse numero e: zero \n\n");
	} else if	(x==1) {
		printf("Esse numero e: um\n\n");
	} else if(x==2) {
		printf("esse numero e: dois\n\n");
	} else if(x==3) {
		printf("Esse numero e: tres\n\n");
	} else if(x==4) {
		printf("Esse numero e: quatro\n\n");
	} else if(x==5) {
		printf("Esse numero e: cinco\n\n");
	} else if(x==6) {
		printf("Esse numero e: seis\n\n");
	} else if(x==7) {
		printf("esse numero e: sete\n\n");
	} else if(x==8) {
		printf("esse numero e: oito\n\n");
	} else if(x==9) {
		printf("esse numero e: nove\n\n");
	} else if(x==10) {
		printf("esse numero e: dez\n\n");
	} else if(x<0) {
		printf("Desconhecido\n\n");
	} else if(x>10) {
		printf("Desconhecido\n\n");
	}
}
}