#include<stdio.h>
int main(){
  
  int i,j,temp,limit,value[100];

printf("Enter your size");
     scanf("%d",&limit);

printf("Enter values");

for(i=0;i<limit;i++){
scanf("%d",&value[i]);
}

for(i=0;i<limit;i++){
    for(j=i;j<limit;j++){
       if(value[i]>value[j]){
    temp=value[i];
    value[i]=value[j];
    value[j]=temp;
    }
}
}
printf("Sorted values :");
for(i=0;i<limit;i++){
    printf("%d ",value[i]);
    printf(" ");
}
return 0;
}
