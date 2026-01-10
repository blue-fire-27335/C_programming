#include<stdio.h>
char strcomp(char *src,char *dst){
    int i,flag=0;
    for(i=0;*(src+i)!='\0';i++){
        flag=0;
    if(*(dst+i)!=*(src+i)) flag=1;
    }
    if(!flag) printf("Success\n");
    else printf("Failure\n");

}
void main(){
    char s[100],d[100];
    printf("enter a string\n");
    scanf("%s",s);
    printf("enter a string\n");
    scanf("%s",d);
    strcomp(s,d);
}