#include<stdio.h>
int main(){
    int i=5;
    st1 : if(i>=1){
        printf("%d\n",i);
        i--;
        goto st1;
    }
    return 0;
}