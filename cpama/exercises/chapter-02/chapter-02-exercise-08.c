/*
 * Name:    interest rate calculator
 * Purpose: works out the interest rate for a loan
 *          during three months.
 *          sample input:
 *            Enter amount of loan: 20000.00
 *            Enter amount of loan: 6.0
 *            Enter amount of loan: 386.66
 * Author:  twissell
 */

#include <stdio.h>

int main(void) {

  float loan, interest, interest_rate, payment, monthly_interest_rate, balance;

  printf("Enter amount of loan: ");
  scanf("%f", &loan);

  printf("Enter interest rate: ");
  scanf("%f", &interest_rate);

  printf("Enter monthly payment: ");
  scanf("%f", &payment);

  /* first month */
  balance = loan - payment;
  interest = (interest_rate / 100) * loan;
  monthly_interest_rate = interest / 12;
  balance = balance + monthly_interest_rate;
  printf("Balance remaining after first payment: $%.2f\n", balance);

  /* second month */
  loan = balance;
  balance = loan - payment;
  interest = (interest_rate / 100) * loan;
  monthly_interest_rate = interest / 12;
  balance = balance + monthly_interest_rate;
  printf("Balance remaining after second payment: $%.2f\n", balance);
  
  /* third month */
  loan = balance;
  balance = loan - payment;
  interest = (interest_rate / 100) * loan;
  monthly_interest_rate = interest / 12;
  balance = balance + monthly_interest_rate;
  printf("Balance remaining after third payment: $%.2f\n", balance);

  return 0;

}
