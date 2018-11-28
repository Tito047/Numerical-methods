#include<stdio.h>
#define f(x)  ((x-1.5)*(x-2.23))
float mod(float a,float b){
if ((a-b)>0)
return (a-b);
else
return (b-a);
}
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
void main(){
float a,b,c;
printf("enter the upper and lower limit");
scanf("%f",&a);
scanf("%f",&b);
while(mod(a,b)>0.00001)
{
c=(a+b)/2; 
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
