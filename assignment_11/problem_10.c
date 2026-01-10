#include<stdio.h>
char strcon(char *src1,char *src2,char *dst){
    int i,count=0;
    for(i=0;*(src1+i)!='\0';i++){
        *(dst+i)=*(src1+i);
        count++;
    }
    for(i=0;*(src2+i)!='\0';i++){
        *(dst+count+i)=*(src2+i);
    }

}
void main(){
    char s[100],d[100],e[200];
    printf("enter a string\n");
    scanf("%s",s);
    printf("enter a string\n");
    scanf("%s",d);
    strcon(s,d,e);
    printf("%s",e);
}