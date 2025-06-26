#include <stdio.h>
#include <stdlib.h>

int count(int r, int c) {
    if (c==1||r==1) return 1;
    return count(r-1, c) + count(r, c-1);
}
int r, c;
int main() {
    scanf("%d %d", &r, &c);
    printf("%d", count(r, c));
}