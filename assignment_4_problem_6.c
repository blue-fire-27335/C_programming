#include<stdio.h>
int main (){
    int i=11;
    st1:if(i<20){
        if(i%2==1) printf("%d\n",i);
        i++;
        goto st1;
    }
}