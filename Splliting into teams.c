During the Physical Education hour, PT sir has decided to conduct some team games. He wants to split the students in the class into equal-sized teams. In some cases, there may be some students who are left out from teams and he wanted to use the left out, students, to assist him in conducting the team games. For instance, if there are 50 students in the class and if the class has to be divided into 7 equal-sized teams, 7 students will be there in each team and 1 student will be left out. PT sir asks your help to automate this team splitting task. Can you please help him out?

Input Format

Input consists of 2 integers. The first integer corresponds to the number of students in the class. The second integer corresponds to the number of teams.

Constraints

1<=n<=10^7

Output Format

Output consists of 2 integers. The first integer corresponds to the number of students in the each team. The second integer corresponds to the remaining students.

Sample Input 0

60
8
Sample Output 0

The number of students in each team is 7 and left out is 4
Sample Input 1

78
6
Sample Output 1

The number of students in each team is 13 and left out is 0
Sample Input 2

40
6
Sample Output 2

The number of students in each team is 6 and left out is 4
Sample Input 3

80
3
Sample Output 3

The number of students in each team is 26 and left out is 2

Source Code:
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int a,b;
    scanf("%d%d",&a,&b);
    printf("The number of students in each team is %d and left out is %d",a/b,a%b);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
