#include<stdio.h>
int main() {
	int x=0,y=0,z=0;
	char li[4]="<li>", nome[] = "<li>Dimitri</li><li>Irina bonjour</li><li>Mikhail</li><li>Vladimir pereot</li><li>Sacha</li><li>Alison Bernardino</li><li>Rodrigo Mantovani</li><li>Fernando Manzoli</li><li>Alycia Debman</li><li>Nicklaus</li><li>Caroline forbes</li><li>Faustão</li><li>Açucena</li><li>Augusta</li><li>Insandonram</li><li>Hortênsia</li><li>Martina</li><li>Pilar</li><li>Adele</li><li>Ayla</li><li>Dora</li><li>Iolanda</li><li>Matilda</li><li>Ramona</li><li>Agnes</li><li>Benedita</li><li>Eleonara</li><li>Julieta</li><li>Melina</li><li>Serena</li><li>Alegra</li><li>Betina</li><li>Esperança</li><li>Lia</li><li>Mia</li><li>Tarsila</li><li>Allana</li><li>Branca</li><li>Estrela</li><li>Linda</li><li>Micaela</li><li>Teodora</li><li>Amélia</li><li>Caetana</li><li>Felipa</li><li>Lolita</li><li>Naomi</li><li>Úrsula</li><li>Amora</li><li>Carlota</li><li>Flora</li><li>Louise</li><li>Olga</li><li>Vida</li><li>Anabel</li><li>Celina</li><li>Florença</li><li>Luna</li><li>Pandora</li><li>Violeta</li><li>Analu</li><li>Charlote</li><li>Frederica</li><li>Mabel</li><li>Penélope</li><li>Zoé</li><li>Anastácia</li><li>Constança</li><li>Gaia</li><li>Maia</li><li>Pérola</li><li>Angelina</li><li>Cora</li><li>Guadalupe</li><li>Margarida</li><li>Petra</li></ul></body></html>", aux[99];

printf("Lista de procurados KGB\n\n");
	for(x=0; nome[x]!='\0'; x++) {
		if(nome[x]==li[y]) {
			y++;
			if(nome[x]=='>') {
				x=x+1;
				while(nome[x]!='<') {
					aux[z]=nome[x];
					z++;
					x++;
					if(nome[x]=='<'){
						aux[z]='\n';
						z=z+1;
					}
				}
			}
		} else {
			y=0;
		}
	}if(nome[x]=='\0'){
		aux[z]='\0';
	}
	printf("%s",aux);
}