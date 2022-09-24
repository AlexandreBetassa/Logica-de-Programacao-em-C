#include<stdio.h>
main() {
	char code[20]= {'W','P','D','F','`','D','P','O','T','F','H','V','J','V'};
	for(int x=0; x<20; x++) {
		printf("%c", code[x]-1);
	}
}