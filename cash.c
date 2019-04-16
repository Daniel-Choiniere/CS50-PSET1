#include <cs50.h>
#include <stdio.h>

int main(void) {
    float change;
    do {
        change = get_float("Change Due: ");
    }
    while (change <= 0);
        printf("%f\n", change);
}
