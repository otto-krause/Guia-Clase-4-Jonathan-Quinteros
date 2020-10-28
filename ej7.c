#include<stdio.h>
#include<stdlib.h>
int main()
{
int num,num1;
printf("ingrese los numeros\n");
scanf("%d %d",&num,&num1);
if(num>num1)
{
printf("el mayor es %d\n",num);
}
else{
if (num==num1)

{
printf("son iguales\n");
}
else{
printf("el mayor es %d\n",num1);
}
}
return 0;
}
