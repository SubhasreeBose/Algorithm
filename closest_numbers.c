#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int compare(const void *a, const void *b)
    {
    return(*(int *) a -*(int *)b );
}
int main() {

    int n,i,value,min;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    qsort(array,n,sizeof(int),compare);
    /*
    for(i=0;i<n;i++)
        printf("%d\t",array[i]);
        */
    int result[2*n-2];
    min=array[1]-array[0];
    for(i=0;i<n;i++)
        {
        if(i!=n-1)
            {
            value=array[i+1]-array[i];
            if(min>value)
                min=value;
            
            
        }
    }
    int k=0;
    for(i=0;i<n;i++)
        {
        if(i!=n-1)
            {
            value=array[i+1]-array[i];
            if(min==value)
                {
                result[k++]=array[i];
                result[k++]=array[i+1];
            }
            
            
        }
    }
    for(i=0;i<k;i++)
     printf("%d\t",result[i]);
    return 0;
}
