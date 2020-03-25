#include <cs50.h>
#include <stdio.h>

int main(void) {

int pyramidHeight;

    do  {
        pyramidHeight = get_int("Height: ");

    } while (pyramidHeight < 1 || pyramidHeight > 8);
        for(int i = 0; i < pyramidHeight; i++) {
            for(int j = 0; j < pyramidHeight; j++) {
                if (i + j < pyramidHeight - 1) {
                    printf(" ");
                    
                } else {
                    printf("#");
                }               
            }
            
            printf("\n");
        }
    }   
