Write a program to check whether the person is eligible to donate blood. Age must be 18 or above. Weight must be 45 or above. Hemoglobin must be 5.5 or above.

Input Format

First input consists of age Second Input consists of weight Third Input consists of hemoglobin level.

Constraints

1<=n<=10^7

Output Format

Eligible then display He or She can donate blood Not eligible then display He or She unable to donate blood

Sample Input 0

15
44
5.4
Sample Output 0

He or She unable to donate blood

Source Code:
#include <stdio.h>

int main() {
    int age,weight;
    float hemoglobin;
    scanf("%d",&age);
    scanf("%d",&weight);
    scanf("%f",&hemoglobin);
    if (age>=18&&weight>=45&&hemoglobin>=5.5)
    {
        printf("He or She can donate blood\n");
    }
  else
    {
        printf("He or She unable to donate blood\n");
    }

    return 0;
}
