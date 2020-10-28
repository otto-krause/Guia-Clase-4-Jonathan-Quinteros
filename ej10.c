#include<stdio.h>
#include<stdlib.h>
int main()
{
int cat,canth;
float sueldob,sueldot;
printf("ingrese su sueldo\n");
scanf("%f",&sueldob);
printf("ingrese su categoria\n");
scanf("%d",&cat);
if(cat==1)

{
sueldot=sueldob+(sueldob*10/100);
}
else{
sueldot=sueldob+(sueldob*20/100);
}
printf("ingrese su cantidad de hijos\n");
scanf("%d",&canth);
if(canth>4)
{
sueldot=sueldot+(canth*500);
}
else{
sueldot=sueldot+(canth*300);
}
printf("su sueldo es %f",sueldot);
return 0;
}
