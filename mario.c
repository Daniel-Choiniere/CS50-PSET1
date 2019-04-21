#include <cs50.h>
#include <stdio.h>
// import the string module to be able to use string methods
#include <string.h>

int main(void)
{
    int height;
    do {
        //     get the height in amount of rows from the user
        height = get_int("Please give me a number of rows between 1 -8: ");
    } 
//     if the user enters an invalid input it will ask the question for rows again
    while (height < 1 || height > 8);
    
//     while i is less than the number that user gave...
    for (int i = 0; i < height; i++) {

// //    figure out how many "bricks" and "spaces" are in each row on each iteration 
        int bricks = i + 1;
        int spaces = height - i - 1;
// //         printf("%i\n",bricks);
// //         printf("%i\n",spaces);
        
//     add the spaces into the row
        for (int j = 0; j < spaces; j++) 
            printf(" ");
        
//     add the bricks into the row after the spaces
        for (int j = 0; j < bricks; j++) 
            printf("#");
        
        printf("\n");
    }
}