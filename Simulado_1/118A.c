#include <stdio.h> // scanf e printf
// #include <string.h> // strlen, strcpy, strchr
#include <ctype.h> //  toLower

int main() {
    char palavra[105], c;
    int i;

    scanf("%s", palavra);

    for (i = 0; palavra[i] != '\0'; i++) {
        c = tolower(palavra[i]);

        if (c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'u' || c == 'i') {
            continue;
        } else {
            printf(".%c", c);
        }
    }
    
    printf("\n");
    return 0;
}