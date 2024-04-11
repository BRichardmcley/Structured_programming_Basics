#include <stdio.h>

void calculate_minimum_fixed_monthly_payment(float balance, float annualInterestRate) {
	float monthlyInterestRate = annualInterestRate / 12.0;
	int minimumFixedMonthlyPayment = 0;
	float monthlyUnpaidBalance = balance;

	 while (monthlyUnpaidBalance > 0) {
		 minimumFixedMonthlyPayment += 10;
		 monthlyUnpaidBalance = balance;
		 int month = 1;

		 while (month <= 12 && monthlyUnpaidBalance > 0) {
			 monthlyUnpaidBalance -= minimumFixedMonthlyPayment;
			 monthlyUnpaidBalance += monthlyInterestRate * monthlyUnpaidBalance;
			  month += 1;
		 }
	 }
	 printf("Lowest Payment: %d\n", minimumFixedMonthlyPayment);
}
int main() {
	float balance,annualInterestRate=0.2;
	 printf("enter balance:");
	  scanf("%f", &balance);
	  calculate_minimum_fixed_monthly_payment(balance, annualInterestRate);
	   return 0;
}
