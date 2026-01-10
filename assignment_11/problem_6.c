#include<stdio.h>
char strcopy(char *src,char *dst){
    int i;
    for(i=0;*(src+i)!='\0';i++){
    *(dst+i)=*(src+i);
    }
}
void main(){
    char s[100],d[100];
    printf("enter a string\n");
    scanf("%s",s);
    strcopy(s,d);
    printf("%s",d);
}