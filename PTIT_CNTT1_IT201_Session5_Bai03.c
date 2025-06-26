#include<stdio.h>
#include<stdlib.h>

int factorial(int n){
    if(n==0) return 1;
    return n*factorial(n-1);
}
int n;
int main() {
    scanf("%d", &n);
    if (n < 0)printf("Khong hop le");
    else printf("%d", factorial(n));
}