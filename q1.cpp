#include <stdio.h>
int main(){
    int *p;
    int age=20;
    p = &age;
    printf("age = %d\n", age);
    printf("age = %d\n", *p);
    *p = age + 1;
    printf("age = %d\n", age); 
    return 0;
}