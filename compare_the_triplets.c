#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int a0,ascore,bscore; 
    int a1; 
    int a2; 
    scanf("%d %d %d",&a0,&a1,&a2);
    int b0; 
    int b1; 
    int b2; 
    scanf("%d %d %d",&b0,&b1,&b2);
    int r1,r2,r3;
    r1=(a0>b0)?1:0;
    r2=(a1>b1)?1:0;
    r3=(a2>b2)?1:0;
     ascore=r1+r2+r3;
    r1=(b0>a0)?1:0;
    r2=(b1>a1)?1:0;
    r3=(b2>a2)?1:0;
     bscore=r1+r2+r3;
    printf("%d %d",ascore,bscore);
    return 0;
}
