#include<stdio.h>
#include<stdlib.h>
int main()
{
float sueldo,hora;
char cat=' ';
printf("ingrese su categoria\n");
scanf("%c",&cat);
printf("ingrese sus horas trabajadas\n");
scanf("%f",&hora);

if(cat=='A'){
sueldo=hora*200;
}
else{
if(cat=='B'){
sueldo=hora*180;
}
else{
sueldo=hora*150;
}
}
printf("su sueldo es %f\n",sueldo);
return 0;
}
