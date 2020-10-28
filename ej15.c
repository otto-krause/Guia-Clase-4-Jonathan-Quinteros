#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,n1,n2;
printf("ingrese 3 numeros\n");
scanf("%d %d %d",&n,&n1,&n2);
if (n<n1&&n<n2&&n1<n2)
{
printf("ascendente\n");
}
return 0;
}
