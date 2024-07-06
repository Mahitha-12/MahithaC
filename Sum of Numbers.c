Write a program to print the sum of the given numbers. The values must be scanned until the user enters -1 as value.

Input Format

Input consists of a list of integers.

Constraints

1<=n<=10^7

Output Format

The output consists of the sum of the given integers.

Sample Input 0

1
2
3
4
-1
Sample Output 0

10
Sample Input 1

5
8
3
4
6
2
-1
Sample Output 1

28

Source Code:
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int sum,n;
    scanf("%d",&n);
    sum=0;
    while(n!=-1)
    {
        sum=sum+n;
        scanf("%d",&n);
    }
    printf("%d",sum);
    return 0;
}
