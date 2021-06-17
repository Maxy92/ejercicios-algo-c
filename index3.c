#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
    bool op = c >= a + b || b + c <= a || c + a <= b;

    printf("%s\n", op ? "falso" : "verdadero" );
  return 0;
}
