#include<stdio.h>
#include<stdlib.h>

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}
int n;
int main() {
    scanf("%d", &n);
    if (n < 0)printf("Khong hop le");
    else if (n == 0) printf("0");
    else {
        int a[n];
        for (int i = 0; i < n; i++) a[i] = fibonacci(i);
        for (int i = 0; i < n; i++) printf("%d ", a[i]);
    }
}