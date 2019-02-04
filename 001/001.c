#include <stdio.h>
#define MAX 10


int sumOfMultiples(int max, int num){
  max -= 1;
  int aux = max/num;
  aux = num * (aux*(aux+1))/2; 
  return aux;
}

int main(void) {
  int value  = sumOfMultiples(MAX, 3) + sumOfMultiples(MAX, 5) - sumOfMultiples(MAX, 15);

  printf("Sum of multiples of 3 and 5 under %d: %d\n",MAX, value);

}