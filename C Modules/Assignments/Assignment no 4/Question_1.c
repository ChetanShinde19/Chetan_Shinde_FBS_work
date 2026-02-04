#include <stdio.h>
#include <math.h>

int main() {
    int n, num, temp, digit, digits, sum;

    printf("Enter n: ");
    scanf("%d", &n);

    for (num = 1; num <= n; num++) {
        temp = num;
        digits = 0;

        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = num;
        sum = 0;

        while (temp != 0) {
            digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }

        if (sum == num) {
            printf("%d ", num);
        }
    }

    return 0;
}
