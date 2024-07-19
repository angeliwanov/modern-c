#include <stdio.h>

int main() {
  float amount, interest, payment, balance;
  printf("Enter amount of loan: ");
  scanf("%f", &amount);
  printf("Enter interest rate: ");
  scanf("%f", &interest);
  printf("Enter monthly payment: ");
  scanf("%f", &payment);

  balance = amount;
  for (int i = 0; i < 3; i++) {
    balance = balance * (1 + (interest/12)/100) - payment;
    printf("Balance remaining after first payment: %.2f\n", balance);
  }

  return 0;
}