#include<stdio.h>
main() {
	int x=0,y=0,z=0;
	char vp[]="<ul><li>HarryPota</li></ul>",via[99]="<li>",va[99];
	while(vp[x]!='\0') {
		if(vp[x]==via[y]) {
			x++;
			y++;
			if(via[y]=='\0') {
				for(x; vp[x]!='<'; x++) {
					va[z]=vp[x];
					z++;
				}
				va[z]='\0';
				break;
			}
		} else {
			y=0;
			if(vp[x]!=via[y]) {
				x++;
			}
		}
	}
	printf("%s", va);
}