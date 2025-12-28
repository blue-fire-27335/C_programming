#include<stdio.h>
int main(){
    int num,l=0,f=0,onum,i=0;
    printf("enter a number\n");
    scanf("%d",&num);
    onum=num;
    l=num%10;
    st1:if(num>10){
        num/=10;
        i++;
        goto st1;
    }
    if(l%2==0) printf("result=%d",onum);
    else{
    f=1;
    st2:if(i>0){
    f=f*10;
    i--;
    goto st2;   
    }
    onum=onum-f;
    printf("result=%d",onum);}
    return 0;
}