#include<stdio.h>
int hcf(int,int);
int main(){
    int n1,n2;
 printf("enter any two numbers\n-->");
 scanf("%d%d",&n1,&n2);
printf("the hcf of numbers is\n-->%d",hcf(n1,n2));
}
int hcf(int n1,int n2){
    if(n2!=0){
        return hcf(n2,n1%n2);
      
}
    else {
        return n1;
    }

}