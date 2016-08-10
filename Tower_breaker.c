
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int i,n,x,y;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d%d",&x,&y);
        if(y==1 || x%2==0)
            printf("2\n");
        else
            printf("1\n");
    }
    return 0;
}
