#include<stdio.h>
#include<stdlib.h>
int main()
{
int v,v1,v2;
printf("ingrese 3 valores \n");
scanf("%d %d %d",&v,&v1,&v2);
if (v==v1&&v1==v2)
{
printf("son iguales \n");
}
else
{
if (v==v1||v1==v2||v==v2)
{
printf("dos iguales y uno distinto \n");
}
else
{printf("son todos distintos \n");
}
}
return 0;
}
