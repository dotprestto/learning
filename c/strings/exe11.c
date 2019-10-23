#include <ctype.h>
#include <stdio.h>
#include <string.h>

void removePos(char str[], int position) {
    for (int i = position; str[i]; i++) {
        str[i] = str[i + 1];
    }
}

void removeChar(char str[], char referencia[]) {
    for (int i = 0; str[i]; i++) {
        for (int j = 0; referencia[j]; j++) {
            strchr(str, referencia[i]);
            if (str[i] == referencia[j]) {
                removePos(str, i);
                j--;
            }
        }
    }
}
int main() {
    int casos;
    char str[100], referencia[100];

    scanf("%d%*c\n", &casos);
    gets(referencia);

    for (int i = 0; i < casos; i++) {
        gets(str);
        removeChar(str, referencia);
        printf("\n%s\n", str);
    }

    return 0;
}