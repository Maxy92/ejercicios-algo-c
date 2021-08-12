#include "stdlib.h"
#include "stdio.h"
#include "math.h"

int main(int argc, char const *argv[]) {

  int x = atoi(argv[1]);
  int y = atoi(argv[2]);
  int z = atoi(argv[3]);




if (x > y && y > z) {
  printf("verdadero\n");
}
  else if (x < y && y < z) {
    printf("verdadero\n");
    /* code */
  }
 else {
   printf("falso\n");
 }









// if (x > y > z) {
//  printf("verdadero\n");
//  }
//    else {
//    printf("falso\n");
//  }


//if (x < y < z) {
//printf("verdadero\n", );
//}





/*  if (x > y > z) || (x < y < z) {
    printf("verdadero\n" );
  }
    else {
      printf("falso\n");
    }
*/






  return 0;
}


//   Es decir si x > y > z   ||   x < y < z. Si no lo están, imprimir "falso".
