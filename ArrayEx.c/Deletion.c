    #include<stdio.h>
    int main(){
        int i,a[50],size,pos,item;
        printf("Enter the size of array");
        scanf("%d",&size);
        printf("Enter the values");
        for(i=0;i<size;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("Enter the element to delete");
        scanf("%d",&pos);
        if(pos<0||pos-1>size)
        {
         printf("invalid number");
         } else
         {
         for(i=pos-1;i<size-1;i++)t
         {
            a[i]=a[i+1];
            size--;
         }
          
         }
         printf("Deleted values");
         for(i=0;i<size;i++)
         {
         printf("\n%d\t",a[i]);
         }
    }