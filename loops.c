
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char const *argv[]) {
  int no1 = atoi(argv[1]);
  int no2 = atoi(argv[2]);
  int no3 = atoi(argv[3]);

  if (no1 == no2 && no2 == no3) {
    printf("IGUALES\n" );
  } else {
    printf("NO SON IGUALES\n");
  }
  return 0;
}
