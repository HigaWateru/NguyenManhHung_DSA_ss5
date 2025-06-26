#include <stdio.h>
#include <stdlib.h>

void print(int n){
    if(n==0) return;
    printf("%d\n", n);
    print(n-1);
}
int n;
int main(){
    scanf("%d", &n);
    print(n);
}