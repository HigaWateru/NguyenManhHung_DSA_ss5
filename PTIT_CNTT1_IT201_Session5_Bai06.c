#include<stdio.h>
#include<stdlib.h>

int sumArr(int *a, int n) {
    if (n == 0) return 0;
    return a[n-1] + sumArr(a, n-1);
}
int a[100];
int n;
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("%d", sumArr(a, n));
}