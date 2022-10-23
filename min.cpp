 int majorityElement(int a[], int size)
    {
        int majelm=0,count=1;
        for(int i=1;i<size;i++){
            if(a[majelm]==a[i])count++;
            else count--;
            if(count==0){
                majelm=i;
                count=1;
            }
        }
        
        int c=0;
        for(int i=0;i<size;i++){
            if(a[i]==a[majelm])c++;
        }
        
        return (c>size/2)?a[majelm]:-1;
      
      
    }
