include <stdio.h>
int main() {
    double num1, num2, num3;
    printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    // if num1 is greater than both num2 and num3, then n1 is the largest
    if (num1 >= num2 && num1 >= num3)
        printf("%.2f is the largest number.", num1);

    // if num2 is greater than both num1 and num3, then n2 is the largest
    if (num2 >= num1 && num2 >= num3)
        printf("%.2f is the largest number.", num2);

    // if num3 is greater than both num1 and num2, then num3 is the largest
    if (num3 >= num1 && num3 >= num2)
        printf("%.2f is the largest number.", num3);

    return 0;
}
