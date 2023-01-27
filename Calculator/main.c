#include <stdio.h>

int main() {

  char op;
  int num1;
  int num2;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("enter first num1:");
   scanf("%d", &num1);
  printf("enter secind num2: ");
  scanf("%d", &num2);
  

  switch (op) {
    case '+':
      printf("%.d + %.d = %.d", num1, num2, num1 + num2);
      break;
    case '-':
      printf("%.d - %.d = %.d", num1, num2, num1 - num2);
      break;
    case '*':
      printf("%.d * %.d = %.d", num1, num2, num1 * num2);
      break;
    case '/':
      printf("%.d / %.d = %.d", num1, num2, num1 / num2);
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}

