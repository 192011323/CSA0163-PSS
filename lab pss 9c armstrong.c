#include <stdio.h>

int main() {
          int n = 153;
        int temp = n;
        int p = 0;

        /*function to calculate
          the sum of individual digits
         */
        while (n > 0) {

            int rem = n % 10;
            p = (p) + (rem * rem * rem);
            n = n / 10;
        }

        /* condition to check whether
           the value of P equals
           to user input or not. */
          if (temp == p) {
            printf("Yes. It is Armstrong No.");
        }
        else {
            printf("No. It is not an Armstrong No.");
        }
    return 0;
}
