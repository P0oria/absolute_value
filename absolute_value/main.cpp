//  Created by Pooria on 9/23/23.

#include <cstdio>

// Function to calculate the absolute value of a number.
int absolute_value(int x) {
    if (x > 0 || x == 0) {
        return x;
    } else {
        return x * -1;
    }
}

// The main function of the program.
int main() {
  int my_num = -5;
  printf("The absolute value of %d is %d.\n", my_num,
         absolute_value(my_num));
}
