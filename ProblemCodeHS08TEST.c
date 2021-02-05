/*
Pooja would like to withdraw X $US from an ATM. The cash machine will only accept the transaction if X is a 
multiple of 5, and Pooja's account balance has enough cash to perform the withdrawal transaction (including 
bank charges). For each successful withdrawal the bank charges 0.50 $US. Calculate Pooja's account balance 
after an attempted transaction.
INPUT
1.Positive integer 0 < X <= 2000 - the amount of cash which Pooja wishes to withdraw.
2.Nonnegative number 0<= Y <= 2000 with two digits of precision - Pooja's initial account balance
OUTPUT
Output the account balance after the attempted transaction, given as a number with two digits of precision. 
If there is not enough money in the account to complete the transaction, output the current bank balance.
INPUT SAMPLE - 
30 120.00 
89.50 //successful transaction
42 120.00 
120.00 // unsuccessfull transaction as 42 % 5 != 0
300 120.00
120.00 // unsuccessfull transaction as 300>120.00

*/
#include <stdio.h>

int main(void) 
{
	double withdraw,balance;
	scanf("%lf",&withdraw);
	scanf("%lf",&balance);
	if(withdraw + 0.5 <= balance && (int)withdraw % 5 == 0 && withdraw > 0 && withdraw <= 2000 && balance > 0 && balance <= 2000)
	printf("%.2f",balance - withdraw - 0.5);
	else{
	    printf("%.2f",balance);
	}
	return 0;
}

