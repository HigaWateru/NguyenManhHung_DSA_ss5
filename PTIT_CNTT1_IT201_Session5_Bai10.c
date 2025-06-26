#include<stdio.h>
int countLine(int i, int j, int r, int c, int blR, int blC) {
    if (i > r || j > c) return 0;
    if (i == blR && j == blC) return 0;
    if (i == r && j == c) return 1;
    return countLine(i+1, j, r, c, blR, blC) + countLine(i, j+1, r, c, blR, blC);
}
int r, c, blR, blC;
int main() {
    printf("rows:");
    scanf("%d", &r);
    printf("columns:");
    scanf("%d", &c);
    printf("blocked row:");
    scanf("%d", &blR);
    printf("blocked column:");
    scanf("%d", &blC);
    printf("%d", countLine(0, 0, r - 1, c - 1, blR, blC));
}