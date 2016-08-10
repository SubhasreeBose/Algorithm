#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,i,x;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&x);
        if(x%7==1|| x%7==0)
        printf("Second\n");
        else
            printf("First\n");
    }
    return 0;
}
