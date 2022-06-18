#include<stdio.h>
main() {
	float nota[14]= {1,54,29,97,32,11,54,59,18,36,66,98,82,51}, maior=0,menor=100,somaNota=0, media=0;
	for(int x=0; x<14; x++) {
		if(nota[x]<=menor) {
			menor=nota[x];
		}
		if(nota[x]>=maior) {
			maior=nota[x];
		}
		somaNota=somaNota+nota[x];
	}
	media=somaNota/14;
	printf("A maior nota e %.2f\nA menor nota e: %.2f\nA media e %.2f", maior,menor,media);
}