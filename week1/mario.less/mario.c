#include <stdio.h>
int main(void){
    int n;
    do{
        printf("Enter a Number: ");
        scanf("%d", &n);
    }while(n<0);
    for(int i = 1; i<=n; i++){
        for(int j = 0; j<n-i; j++){
            putchar(' ');
        }
        for(int j = 0; j<i; j++){
            putchar('#');
        }
        printf("\n");
    }
}