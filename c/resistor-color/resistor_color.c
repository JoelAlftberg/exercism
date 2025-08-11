#include "resistor_color.h"

int color_code(resistor_band_t resistor_color){
  return resistor_color;
}

const resistor_band_t * colors(){
  static const resistor_band_t color_codes[] = {COLORS};
  return color_codes;
}
  

