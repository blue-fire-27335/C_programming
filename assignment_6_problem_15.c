#include<stdio.h>
int main(){
    int num,l=0,f,onum,i=0;
    printf("enter a number\n");
    scanf("%d",&num);
    onum=num;
    l=num%10;
    while(num>10){
        num/=10;
        i++;
    }
    if(l%2==0) printf("result=%d",onum);
    else{
    f=1;
    while(i>0){
    f=f*10;
    i--;   
    }
    onum=onum-f;
    printf("result=%d",onum);}
    return 0;
}