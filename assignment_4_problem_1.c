#include<stdio.h>
int main(){
    int i=1;
    st1 : if(i<=5){
        printf("%d\n",i);
        i++;
        goto st1;
    }
    return 0;
}