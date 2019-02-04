#include <stdio.h>

int p002(void) {
  int limit  = 4000000;

  unsigned int a = 1;
  unsigned int b = 1;
  unsigned int c = a + b;
  unsigned int sum = 0;

  while(c < limit)
  {
    sum += c;
    a = c+b;
    b = a+c;
    c = a+b;
  }

  printf("Sum even fib: %u\n", sum);

  return 0;
}