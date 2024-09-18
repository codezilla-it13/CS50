#include <stdio.h>
int main(void){
    int n;
    int coins = 0;
    do{
        printf("Enter the Change to be given: ");
        scanf("%d", &n);
    }while(n<1);
    coins += n/25;
    n %= 25;
    coins += n/10;
    n %= 10;
    coins += n/5;
    n %= 5;
    printf("Coins needed: %d\n", coins+n);
}