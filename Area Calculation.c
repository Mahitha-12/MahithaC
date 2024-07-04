Sheela has three things in her bag. She wants to compute the area of 3 things but 3 things are in different shapes. The three things are in a square shape, rectangular shape, and circular shape respectively. Write a program to help Sheela to calculate the area of different shapes.

Input Format

First input: a side of a square in integer Second input: length of a rectangle in integer Third input: breadth of a rectangle in integer Fourth input: radius of a circle in float

Constraints

1<=side of square <=10**9 1<=length of rectangle<=10**9 1<=breadth of rectangle<=10**9 1<=radius<=10**9

Output Format

The first output should be the area of a square in integer The second output should be the area of a rectangle in integer The third output should be the area of a circle in float with 2 decimal places

Sample Input 0

5
5
4
2.0    
Sample Output 0

25
20
12.56
Sample Input 1

10
15
15
4.5
Sample Output 1

100
225
63.58
Sample Input 2

2
3
6
5.0
Sample Output 2

4
18
78.50


Source Code:
#include <stdio.h>
#include <math.h>
void calculate_areas(int side_square, int length_rectangle, int breadth_rectangle, float radius_circle) {
    int area_square = side_square * side_square;
    int area_rectangle = length_rectangle * breadth_rectangle;
    float area_circle = 3.14 * radius_circle * radius_circle;
    printf("%d\n", area_square);
    printf("%d\n", area_rectangle);
    printf("%.2f\n", area_circle);
}
int main() {
    int side_square, length_rectangle, breadth_rectangle;
    float radius_circle;
    scanf("%d", &side_square);
    scanf("%d", &length_rectangle);
    scanf("%d", &breadth_rectangle);
    scanf("%f", &radius_circle);
    calculate_areas(side_square, length_rectangle, breadth_rectangle, radius_circle);
    return 0;
}
