#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(int argc, char const *argv[]) {
  double t = atof(argv[1]);

  printf("el resultado es %f\n" , sin(2.0*t)+sin(3.0*t));

  return 0;
}
