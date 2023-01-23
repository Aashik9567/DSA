#include<stdio.h>
int reverse(int);
int main(){
     int n;
    printf("enter the number to find reverse:\n-->");
    scanf("%d",&n);
    printf("the reverse of num is %d",reverse(n));
}
int reverse(int n){
    static int rem,d=0;
    int q;
   /* if(n/10==0){
        return n;
    }
    else if(n/10<10){
      q=n/10;
      rem=n%10;
      return rem*10+q;
    }*/
     if (n){
       rem=n%10;
        d=d*10+rem;
        reverse(n/10);
        return d;
    }
}
