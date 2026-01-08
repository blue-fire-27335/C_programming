#include<stdio.h>
int disp_LCM3(){
    int num1,num2,num3,onum2,lcm,rem,hcf,p;
    printf("enter 3 numbers\n");
    scanf("%d %d %d",&num1,&num2,&num3);
    onum2=num2;
    p=num1*num2;
     if(num1>=num2){
        rem=num1;
        num1=num2;
        num2=rem;
    }
    while((num2%num1)!=0){
        rem=num2%num1;
        num1=rem;
        num2=num1;
    }
    hcf=num1;
    lcm=p/hcf;
    num1=num3;
    num2=onum2;
    printf("%d %d %d\n",hcf,lcm,num1);
    p=num1*num2;
     if(num1>=num2){
        rem=num1;
        num1=num2;
        num2=rem;
    }
    while((num2%num1)!=0){
        rem=num2%num1;
        num1=rem;
        num2=num1;
    }
    hcf=num1;
    printf("%d %d %d\n",hcf,lcm,num1);
    lcm=p/hcf;
    printf("lcm=%d",lcm);
}
void main(){
    disp_LCM3();
}

