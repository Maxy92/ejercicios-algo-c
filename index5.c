#include <stdio.h>
#include <stdlib.h>
#include <time.h>


  int main(int argc, char *argv[]) {
    int a = atoi(argv[1]);
    // int b = atoi(argv[2]);

    srand(time(NULL));
    int r = rand();
    printf("%d\n", r);
    printf("%d\n", r % a);
    return 0;
  }
