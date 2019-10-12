#include <ctype.h>
#include <stdio.h>

char *maiuscula(char *str) {
    char *p;
    for (p = str; *p; p++)
        *p = toupper(*p);
    return str;
}
int igual(char str[], char str2[]) {
    int i = 0;
    for (i; str[i]; i++) {
        if (str[i] != str2[i])
            return 0;
    }
    return str[i] == str2[i];
}
int main() {
    char str[100];

    gets(str);

    while (!igual(str, "fim")) {
        printf("%s\n", maiuscula(str));
        gets(str);
    }
}