#include<stdio.h>
void main(){
    int i,j,k;
    for ( i=1;i<=5;i++)
    {
        k=1; 
        for ( j=1;j<=17;j++)
        {
            if ((i+j>=10) && (j<10) || (j-i<9 )&& (j>=10))
            {
                if (k==1)
                {
                    printf("%d ",i);
                    k=2;
                }
                else{
                    printf("* ");
                    k=1;
                }

                
            }
            else{
                printf("* ");
            }
            
        }
    printf("\n");
}

}