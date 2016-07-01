/* This program prints a staircase with a size n entered in stdin */
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; /* Size of staircase entered in stdin */
    int i, j, k;

    scanf("%d",&n);

    for(i = 0; i < n; i++){ /* Main loop to print n lines */

        for(j = 0; j < (n-(i+1)); j++){ /* 1st nested loop to print spaces */
            printf(" ");
        }

        for(k = 0; k < (i+1); k++){ /* 2nd nested loop to print # */
            printf("#");
        }

        printf("\n"); /* prints new line after last # of the line */
    }

    return 0;
}
