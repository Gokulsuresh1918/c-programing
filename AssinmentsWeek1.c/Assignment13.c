#include<stdio.h>
#include<string.h>

int main(){
    char a[100];
    int i,L;
    int flag=0;
    printf("Enter a String");
    scanf("%s",&a);
    L=strlen(a);
    for(i=0;i<L;i++){
        if(a[i]!=a[L-i-1]){
            flag=1;
             break;
        }
    }
    if(flag){
     printf("Not a Palindrome");
    }else{
          printf("Palindrome");
       
    }
    return 0;
}