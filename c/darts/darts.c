#include "darts.h"
#include <math.h>

int score(coordinate_t landing_point){

  // distance formula for two points when x1 and y1 are (0,0)
  double distance_from_center = sqrt(pow(landing_point.x, 2) + pow(landing_point.y, 2));

  if (distance_from_center <= 10.0f){
    if (distance_from_center > 5.0f){
      return 1;
    }
    else if(distance_from_center > 1.0f){
      return 5;
    }
    else if (distance_from_center <= 1.0f){
      return 10;
    }
  }
  
  return 0;

}