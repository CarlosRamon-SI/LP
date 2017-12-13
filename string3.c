#include <stdio.h>

int strcmp(char s[], char t[]);

int main(){
    char x[] = "um";
    char y[] = "um";
    char z[] = "dois";
    printf("\n %s = %s = %s",x,y,strcmp(x,y)==0?"V":"F");
    printf("\n %s != %s = %s",x,y,strcmp(x,y)!=0?"V":"F");
    printf("\n %s < %s = %s",x,z,strcmp(x,y)<0?"V":"F");
    printf("\n %s > %s = %s",x,z,strcmp(x,y)>0?"V":"F");
    printf("\n %s >= %s = %s",z,y,strcmp(x,y)>=0?"V":"F");
    printf("\n %s <= %s = %s",z,y,strcmp(x,y)<=0?"V":"F");
}

int strcmp(char s[], char t[]){
    int i = 0;
    while (s[i] == t[i] && s[i] != '\0')
        i++;
    return s[i] - t[i];
}
