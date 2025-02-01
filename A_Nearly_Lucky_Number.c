#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    int luckyCount = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit == 4 || digit == 7)
            luckyCount++;
        n = 10;
    }

    int isLucky = 0;
    while (luckyCount > 0) {
        int lastDigit = luckyCount % 10;
        if (lastDigit != 4 && lastDigit != 7) {
            isLucky = 0;
            break;
        }
        isLucky = 1;
        luckyCount /= 10;
    }

    if (isLucky)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
