#include<stdio.h>
void main(){
printf("enter the size of the data");
int size;
int mul1=1,div1=1,mul0,div0,j,eta,eta1=0,eta0;
scanf("%d",&size);
int x[size],y[size];
int i;
for (i=0;i<size;i++){
    printf("enter the value of x[%d]: ",i);
    scanf("%d",&x[i]);
    printf("enter the value of y[%d]: ",x[i]);
    scanf("%d",&y[i]);
}
int f;
printf("Enter the value of x: ");
scanf("%d",&f);
for (eta=0;eta<size;eta++){
for (i=0;i<size;i++){
    if (i== eta)
    continue;
  mul0=(f-x[i]);
    mul1=mul1*mul0;}
    for (j=0;j<size;j++){
        if (j==eta)
        continue;
        div0=x[eta]-x[j];
        div1=div1*div0;
    }
    eta0=(mul1/div1)*y[eta];
    eta1=eta1+eta0;
    mul1=1,div1=1;
}
printf("The value of y[%d] is : %d",f,eta1);

}