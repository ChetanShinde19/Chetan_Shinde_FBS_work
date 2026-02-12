#include <stdio.h>
int armstrong(int n,int num,int temp,int digit,int digits,int sum,int i,int power)
{
   
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

            power = 1;
            for (i = 1; i <= digits; i++) {
                power = power * digit;
            }

            sum = sum + power;
            temp /= 10;
        }

        if (sum == num) {
            printf("%d ", num);
        }
    }
}
int main() {
    int n, num, temp, digit, digits, sum, i, power;
    printf("Enter n: ");
    scanf("%d", &n);
    armstrong(n, num, temp, digit, digits, sum, i, power);
}
