#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int count = 0;
    for (int i = 1; i < 1000; i++)
    {
        int a = i / 100;
        int b = (i / 10) % 10;
        int c = i % 10;
        if (a % n == 0 && b % n == 0 && c % n == 0) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}