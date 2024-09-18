#include <stdio.h>
int main(void){
    long long int credit;
    do{
    	printf("Enter Number: ");
    	scanf("%lld", &credit);
		fflush(stdin);}while(credit < 1000000000000);
    int evenDigitsum = 0, oddDigitsum = 0, Digitcount = 0, DigitPosition = 0, doubleDigit = 0;
    long long int temp = credit;
    //Validation by Luhn's Algorithm
    while(temp>0){
        int currentdigit = temp%10;
        // Calculating sum of odddigits and sum of digits evendigits seperately to check whether the card is valid 
        if(DigitPosition == 0){
            oddDigitsum += currentdigit;
        }else{
            doubleDigit = currentdigit*2;
            while(doubleDigit > 0){
                evenDigitsum += (doubleDigit % 10);
                doubleDigit /= 10;
            }
        }
        Digitcount++;
        temp /= 10;
        DigitPosition = !DigitPosition;
    }
    int validcheck = oddDigitsum + evenDigitsum;
    //Checking the Number is valid or not by using modulo Opertor
    if(validcheck % 10 == 0){
		if(Digitcount == 15 && (credit/100000000000000 == 34 || credit/100000000000000 == 37)){
			printf("AMEX\n");
		}else if(Digitcount == 16 && (credit/1000000000000000 >= 51 && credit/1000000000000000 <= 55)){
			printf("MASTER CARD\n");
		}else if((Digitcount == 13 || Digitcount == 16) && (credit/1000000000000 == 4 || credit/1000000000000000 == 4)){
				printf("VISA\n");
		}else{
			printf("INVALID\n");
		}
		
	}else
		printf("INVALID\n");
}