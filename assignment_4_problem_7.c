#include<stdio.h>
int main(){
    int i=11,sum;
    st1 : if(i<100){
            if(i%2==1&&((i%10)+(i/10))==7) printf("%d\n",i);
        
        i++;
        goto st1;}
}