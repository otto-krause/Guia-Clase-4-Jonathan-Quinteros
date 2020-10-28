#include<stdio.h>
#include<stdlib.h>
int main()
{
int b,h,p,a;
printf("ingrese la base del rectangulo:\n");
scanf("%d",&b);
printf("ingrese la altura del rectangulo:\n");
scanf("%d",&h);
p=2*b+2*h;
a=b*h;
printf("el perimetro es %d\n",p);
printf("el area es %d\n",a);
return 0;
}
