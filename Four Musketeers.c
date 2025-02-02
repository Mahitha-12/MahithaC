'Artagnan joined the group of 3 Musketeers and now their group is called four Musketeers. Meanwhile, d'Artagnan also moved to a new house in the same locality nearby to the other three. Currently, the houses of Athos, Porthos and Aramis are located in the shape of a triangle. When the three musketeers asked d'Artagnan about the location of his house, he said that his house is equidistant from the houses of the other 3. Can you please help them find out the location of the house? Given the 3 locations {(x1,y1), (x2,y2) and (x3,y3)} of a triangle, write a program to determine the point which is equidistant from all the 3 points.

Input Format

Input consists of 6 integers. The first integer corresponds to x1. The second integer corresponds to y1. The third and fourth integers correspond to x2 and y2 respectively. The fifth and sixth integers correspond to x3 and y3 respectively.

Constraints

1<=n<=10^7

Output Format

The output consists of two floating point numbers (with one decimal place) which correspond to the location of the house.

Sample Input 0

2
4
10
15
5
8
Sample Output 0

5.7
9.0

Source Code:
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float x1,x2,x3,y1,y2,y3;
scanf("%f\n%f\n%f\n%f\n%f\n%f\n",&x1,&y1,&x2,&y2,&x3,&y3);
float x;
float y;
x=(x1+x2+x3)/3;
y=(y1+y2+y3)/3;
printf("%.1f\n%.1f", x , y);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
}
