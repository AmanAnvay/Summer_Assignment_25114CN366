#include <stdio.h>
#include <math.h>

int main() {
    int start,end, i,temp, digit, count;
    int sum;

    printf("Enter start and end of range: ");
    scanf("%d %d", &start, &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (i=start; i<=end; i++) {
        count = 0;
        temp = i;
        while (temp!= 0) {
            count++;
            temp /= 10;
        }
        temp = i;
        sum = 0;
        while (temp != 0) {
            digit = temp % 10;
            sum += pow(digit, count);
            temp/= 10;
        }

        if (sum == i)
            printf("%d ", i);
    }

    return 0;
}