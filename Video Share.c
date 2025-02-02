“VideoShare” is an online video sharing platform. The company has decided to rate its users channels based on the sum total of the number of views received online and the subscribers. The sum total is reffered to as user points. The rating will be given according to the below charts:

User points ratings: 30-50 Average 51-60 Good 61-80 Excellent 81-100 Outstanding

The whole process is automated and it can be carried out by the company’s system.

Input Format

The input consists of an integer userpoints representing the calculated points

Constraints

30>= userpoints <=100

Output Format

Print rating if not possible print "Invalid Input"

Sample Input 0

77
Sample Output 0

Excellent

Source Code:
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int userpoints;
    scanf("%d", &userpoints);
    if (userpoints >= 30 && userpoints <= 50) {
        printf("Average\n");
    } else if (userpoints >= 51 && userpoints <= 60) {
        printf("Good\n");
    } else if (userpoints >= 61 && userpoints <= 80) {
        printf("Excellent\n");
    } else if (userpoints >= 81 && userpoints <= 100) {
        printf("Outstanding\n");
    } else {
        printf("Invalid Input\n");
    }return 0;
}
