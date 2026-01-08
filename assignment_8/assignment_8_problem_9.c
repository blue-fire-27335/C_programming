#include<stdio.h>
int check_last_digit_odd(int num){
    int l=0,f,onum,i=0;
    onum=num;
    l=num%10;
    while(num>10){
        num/=10;
        i++;
    }
    if(onum%2==0) {
        return onum;
    }
    else{
    f=1;
    while(i>0){
    f=f*10;
    i--;   
    }
    onum=onum-f;
}
    return onum;
}
void main(){
    int num;
    printf("enter a number\n");
    scanf("%d",&num);
    printf("result=%d",check_last_digit_odd(num));
}
