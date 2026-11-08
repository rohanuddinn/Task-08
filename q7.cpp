#include <stdio.h>
#include <string.h>

int main() {
    char secret[] = "nu2026";
    char code[50];

    printf("Enter code: ");
    fgets(code, sizeof(code), stdin);

    code[strcspn(code, "\n")] = '\0';

    if (strcmp(code, secret) == 0) {
        printf("Access granted\n");
    }
    else {
        printf("Access denied\n");
    }

    if (strncmp(code, "nu", 2) == 0) {
        printf("Code starts with \"nu\": Yes\n");
    }
    else {
        printf("Code starts with \"nu\": No\n");
    }

    return 0;
}