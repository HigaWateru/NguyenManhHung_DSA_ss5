#include<stdio.h>
#include<stdlib.h>

int sum(int n) {
    if (n == 0) return 0;
    return n + sum(n-1);
}
int n;
int main() {
    scanf("%d", &n);
    if (n == 0)printf("Khong hop le");
    else printf("%d", sum(n));
}