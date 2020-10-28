#include<stdio.h>
#include<stdlib.h>
int main()
{
int r,r1,r2,r3,r4,rt;
printf("ingrese los valores de la resistencia\n ");
scanf("%d %d %d %d %d",&r,&r1,&r2,&r3,&r4);
rt=r+r1+r2+r3+r4;
printf("r=%i\n",r);
printf("r1=%d\n",r1);
printf("r2=%d\n",r2);
printf("r3=%d\n",r3);
printf("r4=%d\n",r4);
printf("rt=%d\n",rt);
return 0;
}
