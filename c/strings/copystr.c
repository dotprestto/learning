#include <ctype.h>
#include <stdio.h>

int igual(char str[], char str2[]) {
    int i = 0;
    for (i; str[i]; i++) {
        if (str[i] != str2[i])
            return 0;
    }
    return str[i] == str2[i];
}

char *copy(char *dst, char *str) {
    char *temp = dst;
    for (; *str; dst++, str++) {
        *dst = *str;
    }
    *dst = '\0';
    return temp;
}
char *copy2(char *dst, char *str) {
    char *temp = dst;
    while (*dst++ = *str++)
        ;
    return temp;
}
int main() {
    char str[100], str2[100];

    gets(str);

    while (!igual(str, "fim")) {
        printf("[%s]\n", copy(str2, str));

        gets(str);
    }
}