#include "difference_of_squares.h"

unsigned int square_of_sum(unsigned int number){
    // formula for sum of N
    int sum = (number * (number + 1)) / 2;
    return sum * sum;
    
}

unsigned int sum_of_squares(unsigned int number){
    // formula for sum of N squared, number * (number + 1) appear in both formulas
    return (number * (number + 1) * (2 * number + 1)) / 6;
    
}

unsigned int difference_of_squares(unsigned int number){

  return square_of_sum(number) - sum_of_squares(number);

}