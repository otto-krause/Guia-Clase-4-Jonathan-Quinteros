#include<stdio.h>
#include<stdlib.h>
int main()
{
float sup,sup1,sup2,pob1,pob11,pob12,dp,dp1,dp2;
printf("ingrese la superficie y la poblacion del pais 1\n");

scanf("%f %f",&sup,&pob1);
printf("ingrese la superficie y la poblacion del pais 2\n");
scanf("%f %f",&sup1,&pob11);
printf("ingrese la superficie y la poblacion del pais 3\n");
scanf("%f %f",&sup2,&pob12);
dp=pob1/sup;
dp1=pob11/sup1;
dp2=pob12/sup2;
if(dp>dp1)
{
printf("el mas poblado es el pais 1 \n");
}
else{
if(dp1>dp2)
{
printf("el mas poblado es el pais 2 n");
}
else{
printf("el mas poblado es el pais 3\n");
}
return 0;
}
}
