#include<stdio.h>
int check_last_digit_odd(){
    int num,l=0,f,onum,i=0;
    printf("enter a number\n");
    scanf("%d",&num);
    onum=num;
    l=num%10;
    while(num>10){
        num/=10;
        i++;
    }
    if(onum%2==0) printf("result=%d",onum);
    else{
    f=1;
    while(i>0){
    f=f*10;
    i--;   
    }
    onum=onum-f;
    printf("result=%d",onum);}
}
void main(){
    check_last_digit_odd();
}