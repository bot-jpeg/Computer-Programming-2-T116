//TADAYCA, JAYSON L.
#include <stdio.h>

int main() {
  int base, exponent, expo;
  float power = 1;

  /* Take base and exponent as input*/
  printf(" X: ");
  scanf("%d", & base);
  printf(" Y: ");
  scanf("%d", & exponent);

  expo = exponent;

  if (exponent > 0) {
    /*Calculate power */
    while (exponent != 0) {
      power = power * base;
      exponent--;
    }
    printf(" %d ^ %d = %.0f", base, expo, power);
  } else {
    while (expo != 0) {
      {
        power = power / base;
        expo++;

      }
    }
    printf(" %d ^ %d = %.3f", base, exponent, power);
  }
  return 0;
}
