/*Sherlock Holmes suspects his archenemy, Professor Moriarty, is once again plotting something diabolical. Sherlock's companion, Dr. Watson, suggests Moriarty may be responsible for MI6's recent issues with their supercomputer, The Beast.

Shortly after resolving to investigate, Sherlock receives a note from Moriarty boasting about infecting The Beast with a virus; however, he also gives him a clue—a number, . Sherlock determines the key to removing the virus is to find the largest Decent Number having  digits.

A Decent Number has the following properties:

Its digits can only be 3's and/or 5's.
The number of 3's it contains is divisible by 5.
The number of 5's it contains is divisible by 3.
If there are more than one such number, we pick the largest one.
Moriarty's virus shows a clock counting down to The Beast's destruction, and time is running out fast. Your task is to help Sherlock find the key before The Beast is destroyed!


Sample Input

4
1
3
5
11
Sample Output

-1
555
33333
55555533333
Explanation

For 1, there is no decent number having  digit (so we print ).
For 3,  is the only possible number. The number  appears three times in this number, so our count of 's is evenly divisible by  (Decent Number Property 3).
For 5,  is the only possible number. The number  appears five times in this number, so our count of 's is evenly divisible by  (Decent Number Property 2).
For 11,  and all permutations of these digits are valid numbers; among them, the given number is the largest one.
*/






#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t,i; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        scanf("%d",&n);
        
            if(n%3==0)
                {
                for(i=0;i<n/3;i++)
                    printf("555");
                printf("\n");
            }
         else if(n%3==2 && n>5)
            {
             for(i=0;i<(n-5)/3;i++)
                    printf("555");
            printf("33333\n");
        }
         else if(n%3==1 && (n-10)>0)
            {
             for(i=0;i<(n-10)/3;i++)
                    printf("555");
            printf("33333");
             printf("33333\n");
        }
         else  if(n%5==3)
            {
             for(i=0;i<n/5-1;i++)
                    printf("33333");
            printf("555\n");
        }
       else if(n%5==0)
                {
                for(i=0;i<n/5;i++)
                    printf("33333");
                           printf("\n");

            }
      
      
        else
            printf("-1\n");
            
        
    }
    return 0;
}
