#include<stdio.h>
#include<stdlib.h>
int main()
{
float peso,altura,imc;
printf("ingrese su peso \n");
scanf("%f",&peso);

printf("ingrese su altura \n");
scanf("%f",&altura);
imc=peso/(altura*altura);
if(imc<20)
{
printf("bajo peso \n");
}
else{
if(imc<=25)
{
printf("peso ideal \n");
}
else{
printf("excedido \n");
}
}
return 0;
}
