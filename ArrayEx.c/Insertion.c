    #include<stdio.h>
    int main(){
        int i,size,a[50],num,position;
        printf("Enter size of array");
        scanf("%d",&size);//size of limit
        printf("Enter values");
        for(i=0;i<size;i++){
            scanf("%d",&a[i]);//values
        }
        printf("Enter values to inserted");
        scanf("%d",&num);
        printf("Enter position to inserted");
        scanf("%d",&position);
        if(position<0||position>size+1){
            printf("invalid position\n");
        }else{
            for(i=size-1;i>=position-1;i--){//if position =2 : index =1 so position -1
                a[i+1]=a[i];
            }
            a[position-1]=num;
            size++;
        } 
    for(i=0;i<size;i++){
        printf(" Values are : %d\n ",a[i]);
    }
    }