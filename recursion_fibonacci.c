#include<stdio.h>
int fibo(int a){
 if(a==1){
    return 0;
 }
 else if(a==2){
    return 1;
 }
 else{
    return fibo(a-1)+fibo(a-2);
 }
  
}
int main(){
    int n,d,p=0;
    printf("enter the nth term of fibonacci series\n-->");
    scanf("%d",&n);
    printf("the nth term is %d\n",fibo(n));
    for(int i=0;i<n;i++){
      d=fibo(i);
      p=p+d;
      printf("%d\t",d);
    }
    printf("\nsum=%d",p);
}
