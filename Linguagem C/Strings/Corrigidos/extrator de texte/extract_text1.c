#include<stdio.h>
main(){
	int x=0,y=0;
	char v[]="<alexandre>HarryPota</miaKalifha>",aux[99];
	while(v[x]!='>'){
		x++;
	}
	while(v[x]!='<'){
		x++;
		if(v[x]=='<'){
			aux[y]='\0';
		}else
		aux[y]=v[x];
		y++;
	}
	printf("%s",aux);
}