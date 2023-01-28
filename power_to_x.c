#include<stdio.h>
int power(int ,int );
int main(){
    int x,n;
    printf("enter the number and power u want to find:\n-->");
    scanf("%d%d",&x,&n);
    printf("answer:\n-->%d",power(x,n));
    }
    int power(int x,int n){
        if(n==0){
            return 1;
        }
        return x*power(x,n-1);
}
