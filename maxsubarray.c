#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t,n,csum,flag1,flag,k,max,i,j;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%d",&t);
    
    while(t>0)
        {
        t--;
        scanf("%d",&n);
        int array[n];
        int result[n][n];
        csum=0;
     
        flag=1;
        flag1=1;
        k=0;
        for(i=0;i<n;i++){
            scanf("%d",&array[i]);
            if(array[i]>0)
                {
                csum+=array[i];
                if(flag==1) //checking all positive
                    flag=1;
            }
            else
                {
               
                flag=0;
               
                
                
            }
             if(array[i]<0 && flag1==1)
                    flag1=1;
                else
                    flag1=0;
            
          
           
        }
       
     
     
        
        if(flag==1)//positive array
            {
            printf("%d %d\n",csum,csum); //sum of array
           
        }
        else if(flag1==1)//negative array
            {
      
             max=array[0];
        
            for(i=0;i<n;i++)
                {
                if(max<array[i])
                    max=array[i];
            }
             
            printf("%d %d\n",max,max);// highest number in array in both case
         
        }
        else // mixture of positive and negative array
            {
       //kadan
            int max_end=0;
            int max_far=0;
            for(i=0;i<n;i++)
                {
                max_end=max_end+array[i];
                if(max_end<0)
                  max_end=0 ;
                if(max_far<max_end)
                    max_far=max_end;
            }
            printf("%d %d\n",max_far,csum);  // non contiguous =sum of positive integer in array
          
        }
     
     
    }
    return 0;
}
