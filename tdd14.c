#include "math.h"
#include "stdlib.h"
#include "stdio.h"
#include "time.h"

int main(int argc, char const *argv[]) {
  /* code */
  double a1 = atof(argv[1]);
  double b1 = atof(argv[2]);
  double a2 = atof(argv[3]);
  double b2 = atof(argv[4]);

  double producto = (a1*b1)+(a2*b2);

  printf("el producto es %f\n", producto);

  return 0;
}
