#include <stdio.h>
int main(void){
    printf("Enter Your Name: ");
    char name[20];
    fgets(name,19,stdin);
    printf("Hello, %s", name);
}