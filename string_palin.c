#include<stdio.h>
#include<string.h>
int palin(char[],int,int);
int main(){
    int len,c;
    char str[50];
    printf("enter the string:\n-->");
    scanf("%s",str);
    len=strlen(str);
    c=palin(str,0,len-1);
  if (c==1){
    printf("string is palindrome.\n");
}
else{
    printf("string is palindrome.\n");
}
}
int palin(char str[],int i,int j){
    if(i>=j){
        return 1;
    }
    else if(str[i]!=str[j]){
        return 0;
    }
    else{
        palin(str,i+1,j-1);
    }

}