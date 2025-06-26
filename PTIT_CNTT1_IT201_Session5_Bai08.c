#include<stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int strToNum(char *str, int size) {
    if (size == 0) return 0;
    return str[size-1] - '0' + 10 * strToNum(str, size-1);
}
char str[100];
bool checked = false;
int main() {
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    for (int i = 0; i < strlen(str); i++) if (isalpha(str[i])) checked = true;
    if (checked) printf("Input khong hop le");
    else printf("%d", strToNum(str, strlen(str)));
}
