#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {
  double x = atof(argv[1]);
  double y = atof(argv[2]);
  double hip = sqrt(pow(x,2) + pow(y,2));


    printf("La distancia del punto [X;Y] con el origen de cordenadas \n respecto a r2 es %f\n" , hip );
  return 0;
}
