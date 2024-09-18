#include <stdio.h>
void pattern(int n);
int main(void){
    int n;
    do{
        printf("Enter a Number: ");
        scanf("%d", &n);
    }while(n<1 || n>8);
    pattern(n);
}
void pattern(int n){
    for(int i = 1; i<=n; i++){
        for(int j = 0; j<n-i; j++){
            putchar(' ');
        }
        for(int j = 0; j<i; j++){
            putchar('#');
        }
        printf(" ");
        for(int j = 0; j<i; j++){
            putchar('#');
        }
        printf("\n");
    }
}