#include <stdio.h>
void Pay_minimum(double balance, double annualInterestRate, double monthlyPaymentRate){
	double total_paid=0;
	int month=1;
	while(month<=12){
		double min_monthly_payment = monthlyPaymentRate * balance;
		total_paid += min_monthly_payment;
		double unpaid_balance = balance - min_monthly_payment;
		balance = unpaid_balance + (annualInterestRate / 12.0) *unpaid_balance;
		printf("month:%d\n",month);
		printf("Minimum_monthly_payment: %.2f\n", min_monthly_payment );
		printf("Remaining balance: %.2f\n",balance); 
		month++;
	}
	printf("Total paid:%.2f\n",total_paid);
	printf("Unpaid Balance:%.2f\n", balance);

}
int main(){
	double balance;
	double annualInterestRate;
	double monthlyPaymentRate;
	printf("Enter balance:");
	scanf("%lf",& balance);
	printf("Enter the annualInterestRate:");
	scanf("%lf",& annualInterestRate);
	printf("monthlyPaymentRate:");
	scanf("%lf",& monthlyPaymentRate);
	Pay_minimum(balance, annualInterestRate, monthlyPaymentRate);
	return 0;
}
