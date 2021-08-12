#include "math.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"




  int main(int argc, char const *argv[]) {
    srand (time(0));
    int a = atoi(argv[1]);
    int x = rand() % 100;


  if (a == x) {
    printf("Ganaste!!!\n" );
    }
    else {
      printf("Has perdido, intentalo otra vez!\n" );
      }




  return 0;
}
