Write a program to return the nearest 10 multiple of any given number

Input Format

Read a number

Constraints

1<=n<=10^7

Output Format

Print nearest 10 multiple no

Sample Input 0

18
Sample Output 0

20
Sample Input 1

134
Sample Output 1

130
Sample Input 2

155
Sample Output 2

160

Source Code:
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int number,remainder,nearestMultiple;
    scanf("%d",&number);
    remainder=number%10;
    if(remainder>=5)
    {
        nearestMultiple=number+(10-remainder);
    }
  else
  {
        nearestMultiple=number-remainder;
    }
    printf("%d\n", nearestMultiple);

    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
