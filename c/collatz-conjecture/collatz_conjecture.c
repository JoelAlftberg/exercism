#include "collatz_conjecture.h"

int steps(int start){

  int step_amount = 0;

  if (start < 1){
    return ERROR_VALUE;
  }

  for (; start > 1; step_amount++){

    if(start % 2)
      start = (start * 3) + 1;
    else
      start /= 2;

  }

  return step_amount;
}