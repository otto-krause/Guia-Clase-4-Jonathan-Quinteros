#include<stdio.h>
#include<stdlib.h>
int main()
{
int hom,muj,total;
float porcm,porch;
printf("ingrese la cantidad de mujeres:\n");
scanf("%d",&muj);
printf("ingrese la cantidad de hombres:\n");
scanf("%d",&hom);
total=muj+hom;
porcm=muj*100/total;
porch=hom*100/total;
printf("el porcentaje de mujeres es %f",porcm);
printf(" y el de hombres es %f",porch);
return 0;
}
