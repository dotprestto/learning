#include <stdio.h>
#include <string.h>
#define MAXC 100

void split(char *str_a, char *str_b, char *str, char *str_ref) {
    int i;
    char *aux = str_a, *aux_2 = str_b;
    for (; *str_a && !strchr(str_ref, *str_a); str++, str_a++)
        ;
    *str_a = '\0';
    for (; *str != ' '; str++)
        ;
    str++;
    strcpy(str_b, str);
}

int main() {
    int n, i;
    char str_ref[MAXC], str[MAXC], str_a[MAXC], str_b[MAXC];
    scanf("%d%*c", &n);
    gets(str_ref);
    for (i = 0; i < n; i++) {
        gets(str);
        split(str_a, str_b, str, str_ref);
        printf("%s \n%s \n", str_a, str_b);
    }
}