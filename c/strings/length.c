//------------- V2.0 -------------
#include <stdio.h>

int length(char *str) {
    char *s = str;
    for (str; *str; str++)
        ;
    return str - s;
}

int main() {
    char str[100];

    gets(str);
    printf("%d\n", length(str));
}

//------------- V1.0 -------------
// #include <stdio.h>

// int length(char *str) {
//     int i = 0;
//     for (i; *(str + i); i++)
//         ;
//     return i;
// }

// int main() {
//     char str[100];

//     gets(str);
//     printf("%d", length(str));
// }
