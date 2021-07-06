#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define g 10


int main(int argc, char const *argv[]) {
  double xo = atof(argv[1]);
  double vo = atof(argv[2]);
  double t = atof(argv[3]);

  printf("el resultado es %f\n" , xo+vo*t+((t*t)*g)/2    );

  return 0;
}
