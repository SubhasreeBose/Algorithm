#include <stdio.h>
#include <string.h>
#include <math.h>
/*
There are  integers in an array . All but one integer occur in pairs. Your task is to find the number that occurs only once.

Input Format

The first line of the input contains an integer , indicating the number of integers. The next line contains  space-separated integers that form the array .

Constraints

 
 %  ( is an odd number) 

Output Format

Output , the number that occurs only once.

Sample Input:1

1
1
Sample Output:1

1
Sample Input:2

3
1 1 2
Sample Output:2

2
Sample Input:3

5
0 0 1 2 1
Sample Output:3

2
*/
#include <stdlib.h>
#include <assert.h>
int lonelyinteger(int a_size, int* a) {
    int i,res=0;
    for(i=0;i<a_size;i++)
        res=res^a[i];
return res;

}
int main() {
    int res;
    
    int _a_size, _a_i;
    scanf("%d", &_a_size);
    int _a[_a_size];
    for(_a_i = 0; _a_i < _a_size; _a_i++) { 
        int _a_item;
        scanf("%d", &_a_item);
        
        _a[_a_i] = _a_item;
    }
    
    res = lonelyinteger(_a_size, _a);
    printf("%d", res);
    
    return 0;
}
