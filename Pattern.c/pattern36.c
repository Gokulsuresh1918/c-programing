#include<stdio.h>
void main(){
    int i,j;
    char k=97;
    for ( i = 1; i <=5; i++)
    {
        for ( j = 1; j <=i; j++)
        {
            printf("%c ",k++);
            if (k>90)
            {
                k-=32;
            }
            else{
                k+=32;
            }
            
        }
        printf("\n");
    
}

}