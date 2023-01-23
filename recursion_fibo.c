#include<stdio.h>
#include<stdlib.h>
int fact(int);
int main(){
    int num;
    printf("enter the number u want to find factorial of\n-->");
    scanf("%d",&num);
    printf(" factorial of number is\n-->%d",fact(num));
}
int fact(int a){
    if(a==0||a==1){
        return 1;
    }
    else{
        return a*fact(a-1);
    }
}
/* output
enter the number u want to find factorial of
-->5
 factorial of number is
-->120
