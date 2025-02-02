Each Sunday, a newspaper agency sells x copies of a certain newspaper for Rs.a per copy. The cost to the agency of each newspaper is Rs.b. The agency pays a fixed cost for storage, delivery and so on of Rs.100 per Sunday. The newspaper agency wants to calculate the profit obtained on Sundays. Can you please help them out by writing a program to compute the profit given x, a and b.

Input Format

Input consists of 3 integers --- x, a and b. X is the number of copies sold, a is the cost per copy and b is the cost the agency spends per copy

Constraints

1<=no of copies<=10**9 1<=cost of copy<=10**9 1<=cost of agency<=10**9

Output Format

Refer Sample Input and Output for exact formatting specifications

Sample Input 0

1000
2
1
Sample Output 0

900

Source Code:
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x, a, b;
    int revenue, cost, fixed_cost, profit;
    scanf("%d", &x);
    scanf("%d", &a);
    scanf("%d", &b);
    fixed_cost = 100;
    revenue = x * a;
    cost = x * b + fixed_cost;
    profit = revenue - cost;
    printf("%d\n", profit);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
