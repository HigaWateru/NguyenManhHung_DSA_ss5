#include<stdio.h>
#include<stdlib.h>

int sum(int l, int r) {
    if (l == r) return;
    return l + sum(l+1, r);
}
int l, r;
int main() {
    scanf("%d %d", &l, &r);
    if (l > r || l < 0 || r < 0) printf("Khong hop le");
    else printf("%d", sum(l, r));
}