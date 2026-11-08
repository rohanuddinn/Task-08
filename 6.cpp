#include <stdio.h>
#include <string.h>

int main() {
    char firstname[50];
    char rollno[20];
    char username[80];

    printf("Enter first name: ");
    fgets(firstname, sizeof(firstname), stdin);

    printf("Enter roll number: ");
    fgets(rollno, sizeof(rollno), stdin);

    firstname[strcspn(firstname, "\n")] = '\0';
    rollno[strcspn(rollno, "\n")] = '\0';

    strcpy(username, firstname);
    strcat(username, "_");
    strcat(username, rollno);

    printf("Username: %s\n", username);
    printf("Length: %d\n", strlen(username));

    return 0;
}