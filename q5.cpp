#include <stdio.h>

int divide(int a, int b, int *result) {

    if (result == NULL) {
        return -1;
    }

    if (b == 0) {
        return -1;
    }

    *result = a / b;

    return 0;
}

int main() {
    int result;
    int status;

    status = divide(10, 2, &result);

    if (status == 0) {
        printf("Division successful. Result = %d\n", result);
    }
    else {
        printf("Division failed.\n");
    }

    status = divide(10, 0, &result);

    if (status == 0) {
        printf("Division successful. Result = %d\n", result);
    }
    else {
        printf("Division failed: Cannot divide by zero.\n");
    }

    status = divide(10, 2, NULL);

    if (status == 0) {
        printf("Division successful. Result = %d\n", result);
    }
    else {
        printf("Division failed: NULL pointer.\n");
    }

    return 0;
}