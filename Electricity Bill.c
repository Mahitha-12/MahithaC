Electricity board has decided to charge rupees based on the units consumed by a particular home. If the units consumed is less than or equal to 200, the cost for one unit is 0.5. If the unit is less than or equal to 400, the cost for one unit is 0.65 and Rs.100 extra charge. If the unit is less than or equal to 600, the cost for one unit is 0.80 and Rs.200 extra charge. If the unit is greater than 600 the cost for one unit is 1.25 and Rs.425 extra charge. You need to now calculate the electricity bill based on the units consumed (given input).

Input Format

Input consists of one integer. This corresponds to the units consumed.

Constraints

1<=n<=10^7

Output Format

The output consists of one integer. This corresponds to the electricity bill in rupees.

Sample Input 0

200
Sample Output 0

Rs.100

Source Code:
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int units_consumed;
    printf("");
    scanf("%d", &units_consumed);
    int bill = 0;
    if (units_consumed <= 200) {
        bill = units_consumed * 0.5;
    } else if (units_consumed <= 400) {
        bill = 200 * 0.5 + (units_consumed - 200) * 0.65 + 100;
    } else if (units_consumed <= 600) {
        bill = 200 * 0.5 + 200 * 0.65 + (units_consumed - 400) * 0.80 + 200;
    } else {
        bill = 200 * 0.5 + 200 * 0.65 + 200 * 0.80 + (units_consumed - 600) * 1.25 + 425;
    }
    printf("Rs.%d\n", bill);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
