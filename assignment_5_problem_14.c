#include<stdio.h>
int main(){
    int num,l=0,onum,i=0;
    printf("enter a number\n");
    scanf("%d",&num);
    onum=num;
    l=num%10;
    while(num>10){
        num/=10;
        i++;
    }
    onum=onum-l+num;
    while(i>0){
    l=l*10;
    num=num*10;
    i--;   
    }
    onum=onum-num+l;
    printf("result=%d",onum);
    return 0;
}