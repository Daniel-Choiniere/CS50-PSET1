#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void) {
//     intialize variables so they are availabe in the global scope
    int counter;
    float change;
    int cents;
    int remanider; 
    
    do {
//       get input from customer - amount of change due
        change = get_float("Change Due: ");
    }
//         if user enters a negative number re ask for the amount of change due
    while (change <= 0);
//      printf("%f\n", change);
//         round the change off into a whole number
        cents = round(change * 100);
        printf("%i\n", cents);
    
        counter = 0;
        while ((cents / 25) > 0) {
            
            cents -= 25;
            counter++;
        }
        printf("%i\n", counter);
}    