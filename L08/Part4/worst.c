#include <stdio.h>
#include <stdbool.h>

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  
  // Out of bounds array access
  int i;
  for (i = 0; i <= 5; i++) {
    printf("%d\n", arr[i]);
  }
  
  // Incrementing a Boolean variable
  bool b = true;
  b++;
  
  // Matching if and else if conditions
  int x = 10;
  if (x > 5) {
    printf("x is greater than 5\n");
  }
  else if (x > 8) {
    printf("x is greater than 8\n");
  }
  
  // Zero division
  int y = 0;
  int z = 10 / y;

  return 0;
}

