#include<stdio.h>
#include<stdlib.h>
int main()
{
float cuent;
int hora,min,seg,uni;
printf("ingrese hora,minutos y segundos \n");
scanf("%d %d %d",&hora,&min,&seg);
printf("ingrese unidad final \n");
scanf("%d",&uni);
if (uni==1)
{
cuent=seg+(hora*60*60)+(min*60);
printf("segundos= %f \n",cuent);
}

else
{
if(uni==2)
{
cuent=min+(hora*60)+(seg/60);
printf("minutos= %f \n",cuent);
}
else{
cuent=hora+(min/60)+(seg/3600);
printf("horas= %f \n",cuent);
}
}
return 0;
}
