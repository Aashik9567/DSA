#include<stdio.h>
int palindrome(int);
int main(){
    int n,a;
    printf("enter the number to check palindrome:\n-->");
    scanf("%d",&n);
    a=palindrome(n);
    printf("\n");
    if(a==1){
        printf("number is palindrome.");
    }
    else{
        printf("number is not palindrome.");
    }
}
int palindrome(int n){
     static int rem,d=0;
     if (n){
       rem=n%10;
        d=d*10+rem;
        palindrome(n/10);
    }
    if(d==n){
        return 1;
    }
    else{
        return 0;
    }
}