#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include <string.h>

bool checkPalindrome(char *str, int l, int r) {
    if (l>=r) return true;
    if (str[l] != str[r]) return false;
    return checkPalindrome(str, l+1, r-1);
}
char str[100];
int l, r;
int main() {
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    if (checkPalindrome(str, 0, strlen(str) - 1)) printf("Palindrome valid");
    else printf("Palindrome invalid");
}
