
    int b[10];
    int i,j,k=0;
    int count,temp;
    
    printf("Array elements that repeat twice: ");
    
    for (i = 0; i < n; i++) {
        count = 0;
        
        for (j = 0; j < n; j++) {
            if (a[j] == a[i])
                count++;
        }
    
        if (count == 2) {
            b[k++]=i;
          
        }
        
    }z
    for(i=0;i<k;i++){
        
    for(j=0;j<n;j++){
                if(b[i]==j){
                    a[j]=2*a[j];
                    
                }
            }
    }
   // i--;
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    
    return 0;
}