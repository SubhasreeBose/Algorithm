#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    int i,j,k,t,n;
    scanf("%d",&t);
    while(t--)
        {
        k=0;
        scanf("%d",&n);
        int array[n];
        for(i=0;i<n;i++)
            {
            scanf("%d",&array[i]);
            if(n%2!=0)
                {
                if(i%2==0)
                    k=k^array[i];
            }
        }
        if(n%2==0)
            printf("0\n");
        else
            {
            printf("%d\n",k);
                
        }
    }
    return 0;
}
