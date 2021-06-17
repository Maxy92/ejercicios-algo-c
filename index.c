#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(int argc, char const *argv[]) {
  double a = atoi(argv[1]);

  double p = (cos(a)*cos(a)) + (sin(a)*sin(a));
    printf("cos(a)^2 + sin(a)^2 = %f", p);
  return 0;
}
