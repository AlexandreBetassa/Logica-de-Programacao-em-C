#include<stdio.h>
main(){
	char frase[99];
	printf("Digite a mensagem: ");
	gets(frase);
	for(int x=0;frase[x]!='\0';x++);
	printf("%c",frase+1);
}