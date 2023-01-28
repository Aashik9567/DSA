#include<stdio.h>
int count=0;
int tower(int,char,char,char);
int main(){
    char A,B,C;
    int n=3;
    tower(n,'A','C','B');
printf("the no of count =%d",count);
}
int tower(int n,char s,char d,char a){
count ++;
 if(n==1){
    printf("Move disk 1 from %c to %c\n",s,d);
 }
 else{
  tower(n-1,s,a,d);
   printf("move disk %d from %c to %c\n",n,s,d);
  
   tower(n-1,a,d,s);
   }
 
} 
