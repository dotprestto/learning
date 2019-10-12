#include <stdio.h>
#include <string.h>

void contaletra(char str[], char teste[]) {
    int count = 0;
    for (int i = 0; teste[i]; i++) {
        for (int j = 0; str[j]; j++)
            if (teste[i] == str[j])
                count++;
        printf("%c -> %d\n", teste[i], count);
        count = 0;
    }
}

int main() {
    char str[100], teste[100];
    memset(str, 0, sizeof(char));
    gets(teste);
    while (strcmp(str, "fim")) {
        gets(str);
        contaletra(str, teste);
    }
    return 0;
}