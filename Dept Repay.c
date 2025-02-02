Alice wanted to start a business and she was looking for a venture capitalist. Through her friend Bob, she met the owner of a construction company who is interested to invest in an emerging business. Looking at the business proposal, the owner was very much impressed with Alice's work. So he decided to invest in Alice's business and hence gave a green signal to go ahead with the project. Alice bought Rs.X for a period of Y years from the owner at R% interest per annum. Find the rate of interest and the total amount to be given by Alice to the owner. The owner impressed by proper repayment of the financed amount decides to give a special offer of 2% discount on the total interest at the end of the settlement. Find the amount given back by Alice and also find the total amount. (Note: All rupee values should be in two decimal points).

Input Format

Input consists of 3 integers. The first integer corresponds to the principal amount borrowed by Alice. The second integer corresponds to the rate of interest The third integer corresponds to the number of years.

Constraints

1<=n<=10^7

Output Format

The output consists of 4 floating point values. The first value corresponds to the interest. The second corresponds to the amount. The third value corresponds to the discount. The last value corresponds to the final settlement. All floating point values are to be rounded off to two decimal places

Sample Input 0

100
1
10
Sample Output 0

10.00
110.00
0.20
109.80
Sample Input 1

10000
10
5
Sample Output 1

5000.00
15000.00
100.00
14900.00

Source code:
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
float amt,yr,in;
    scanf("%f%f%f",&amt,&yr,&in);
    float ans1=amt*yr*in/100;
    float ans2=amt+ans1;
    float ans3=ans1*2/100;
    float ans4=ans2-ans3;
    printf("%.2f\n%.2f\n%.2f\n%.2f",ans1,ans2,ans3,ans4);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
