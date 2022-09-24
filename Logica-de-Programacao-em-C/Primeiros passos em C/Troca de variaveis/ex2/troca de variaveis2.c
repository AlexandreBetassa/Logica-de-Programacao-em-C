#include<stdio.h>

main()
{
float salario, imposto;
//dados de salario
printf("Informe seu salario: R$");
scanf("%f", &salario);
//dados de impostos
printf("Informe o valor do imposto: ");
scanf("%f", &imposto);

printf("Seu salario liquido e R$%.2f e R$%.2f de impostos",salario*((100-imposto)/100),salario*(imposto/100));
}