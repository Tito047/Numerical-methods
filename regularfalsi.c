#include<stdio.h>
#define f(x)  ((x*x*x)-(3*x*x)+0.77)
float sign(float c){
if (c>0)
{return 1;}
else
if (c<0)
{return (-1);
}
else
return 0;
}
float mod(float a,float b){
if ((a-b)>0)
return (a-b);
else
if ((a-b)<0)
return (b-a);
}
void main(){
float a,b,c;
printf("enter the upper and lower limit");
scanf("%f",&a);
scanf("%f",&b);
while(mod(a,b)>0.001)
{
c=((a*f(b))-(b*f(a)))/(f(b)-f(a));
if (sign(f(c))==sign(f(b)))
{b=c ;}
else 
if (sign(f(c))==sign(f(a)))
{a=c;}
if (f(c)== 0)
break;
}
printf("the answer is %0.5f",c);
printf("the value of the equation  is %0.5f",f(c));
}
