#include<stdio.h>
#include<stdlib.h>
int main()
{
int edad, hora;
float prec,tc,ts;
printf("horas de servicio\n" ) ;
scanf("%d",&hora);
prec=50*hora;
printf("ingrese su edad\n") ;
scanf("%d",&edad) ;
if (edad>=70){
ts=prec-(prec*0.50);
}
else{
if(edad>=60){
ts=prec-(prec*0.30);
}
else{
if(edad>=50){
ts=prec-(prec*0.20);
}
else
tc=prec;
}
}
tc=ts+(prec*0.33);
printf("importe total con impuesto es %f", tc) ;
printf(" y sin es %f",ts) ;
return 0;
}
