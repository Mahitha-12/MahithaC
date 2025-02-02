Write a program to find whether a given character is an uppercase, lowercase, number or symbol. If it is an alphabet find whether it is an Uppercase or Lowercase. If it is a number display Number else display Symbol.

Input Format

Input consists of 1 character

Constraints

1<=ch<=65535

Output Format

Print Upper if upper case letter Print Lower if lower case letter Print Number if number Print Symbol if symbol

Sample Input 0

A
Sample Output 0

Upper
Sample Input 1

d
Sample Output 1

Lower
Sample Input 2

8
Sample Output 2

Number
Sample Input 3

$
Sample Output 3

Symbol

Source Code:
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char ch;
    scanf("%c", &ch);
    if (isalpha(ch)) {
        if (isupper(ch)) {
            printf("Upper\n");
        } 
        else {
            printf("Lower\n");
        }
    }
    else if (isdigit(ch)) {
        printf("Number\n");
    } 
    else {
        printf("Symbol\n");
    }

    


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
