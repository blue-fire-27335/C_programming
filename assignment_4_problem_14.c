#include<stdio.h>
int main(){
    int num,l=0,f=0,onum,i=0;
    printf("enter a number\n");
    scanf("%d",&num);
    onum=num;
    l=num%10;
    st1:if(num>10){
        num/=10;
        printf("%d\n",num);
        i++;
        goto st1;
    }
    f=num;
    onum=onum-l+f;
    printf("%d\n",onum);
    st2:if(i>0){
    l=l*10;
    num=num*10;
    i--;
    goto st2;   
    }
    printf("%d\n%d",l,num);
    onum=onum-num+l;
    printf("result=%d",onum);
    return 0;
}