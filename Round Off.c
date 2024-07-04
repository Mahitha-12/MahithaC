Write a program to get a float value from the user and display it in the below-mentioned format. HINT: Use ceil() and floor() functions.

Input Format

Input consists of one float value.

Constraints

1<=n<10^7

Output Format

Output consists of one integer, its highest round off value and its lowest round off value.

Sample Input 0

54.5
Sample Output 0

54
55.0
54.0

Source Code:
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float n;
    scanf("%f", &n);
    int integer_part = (int)n;
    float ceil_value = ceil(n);
    float floor_value = floor(n);
    printf("%d\n", integer_part);
    printf("%.1f\n", ceil_value);
    printf("%.1f\n", floor_value);
    return 0;
}
