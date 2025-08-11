#include "grains.h"

uint64_t square(uint8_t square_pos){

  uint64_t result = 1;

  if (!square_pos){
    return 0;
  }
  
  while(square_pos-- > 1){
    result *= 2;
  }

  return result;

}


uint64_t total(void){

  uint64_t total_grains = 0;
    
  for(int i = 0; i <= 64; i++){
    total_grains += square(i);
  }

  return total_grains;
}

