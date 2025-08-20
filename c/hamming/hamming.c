#include "hamming.h"
#include "string.h"

int compute(const char *lhs, const char *rhs){

  int distance = 0;

  if (strlen(lhs) != strlen(rhs)){
    return -1;
  }

  for(long unsigned int i = 0; i < strlen(lhs); i++){
    if (lhs[i] != rhs[i]){
      distance++;
    }
  }

  return distance;

}