#include <stdio.h>
#include <string.h>
#include <ctype.h>

int passbnr(char pass[]) {
    int Upper = 0, Lower = 0, Digit = 0, Special = 0;
    int panjang = strlen(pass);

    if (panjang > 12) {
        printf("? Maximum length is 12.\n");
        return 0;
    }

    for (int i = 0; i < panjang; i++) {
        char ch = pass[i];

        if (isspace(ch)) {
            printf("? Password must not contain spaces.\n");
            return 0;
        }
        if (isupper(ch)) Upper = 1;
        else if (islower(ch)) Lower = 1;
        else if (isdigit(ch)) Digit = 1;
        else if (strchr("_/@-!?*#", ch)) Special = 1;
    }

    if (!Upper) printf("Must contain at least one uppercase letter.\n");
    if (!Lower) printf("Must contain at least one lowercase letter.\n");
    if (!Digit) printf("Must contain at least one number.\n");
    if (!Special) printf("Must contain at least one special character (_/@-!?*#).\n");

    if (Upper && Lower && Digit && Special)
        return 1;

    return 0;
}

int main() {
    char pass[20];

    printf("Enter your password: ");
    scanf("%s", pass);

    if (passbnr(pass))
        printf("? Password is valid\n");
    else
        printf("?? Password is invalid\n");

    return 0;
}

