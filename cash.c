#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void) {
//     intialize variables so they are availabe in the global scope
    int counter;
    float change;
    int cents;
    int remainder; 
    
    do {
//       get input from customer - amount of change due
        change = get_float("Change Due: ");
    }
//         if user enters a negative number re ask for the amount of change due
    while (change <= 0);
//         round the change off into a whole number
        cents = round(change * 100);
  
        counter = 0;
        while ((cents / 25) > 0) {
            cents -= 25;
            counter++;
        }
        while ((cents / 10) > 0) {
            cents -= 10;
            counter++;
        }
        while ((cents / 5) > 0) {
            cents -= 5;
            counter++;
        }
        while ((cents / 1) > 0) {
            cents -= 1;
            counter++;
        }
    
    
        printf("%i\n", counter);
}   