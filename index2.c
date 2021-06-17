#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>


int main(int argc, char const *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  bool division;
  division = a % b == 0 || b % a == 0;
//             2  == 0  ||  0    == 0
//             0        ||  1
//                 1
  printf("%s\n" , division ? "verdadero" : "falso");
  return 0;
}
