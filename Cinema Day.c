There is a practice of showing a cinema in the auditorium of a college on a cinema day. A cinema day is a day where the sum of Day(D), Month(M), Year(Y)should be divisible by product of 3 and 4. On that particular day the total number of students in the hostel should be greater than 50 but less than 100. Write a program to find whether the given day is cinema day or not.

Input Format

Read day,month,year and number of students

Constraints

1<=n<=10^7

Output Format

Print Cinema Day or Not a Cinema Day

Sample Input 0

3 
3 
1914 
76
Sample Output 0

Cinema Day

Sorce Code:
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int day, month, year, numStudents;
    scanf("%d", &day);
    scanf("%d", &month);
    scanf("%d", &year);
    scanf("%d", &numStudents);
    int sum = day + month + year;
    if (sum % 12 == 0 && numStudents > 50 && numStudents < 100) {
        printf("Cinema Day\n");
    } else {
        printf("Not a Cinema Day\n");
    }


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
