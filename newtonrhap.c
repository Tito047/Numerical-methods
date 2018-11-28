#include<stdio.h>
#include<math.h>
void main(){
float x,c,h,b;
scanf("%f",&x);
while(sin(x)>0.000001)
{
h=tan(x);
b=x-h;
x=b;
}
printf("%0.5f",x);
}

