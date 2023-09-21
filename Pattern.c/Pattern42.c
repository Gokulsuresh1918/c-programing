#include<stdio.h>
int main(){
    int i,j;
    char a[5]={'G','O','K','U','L'};

    for (i=1; i <= 5; i++)
    {
        for ( j = 0; j < i; j++)
        {
            printf("%c",a[j]);
        }
        printf("\n");
    }
    
}