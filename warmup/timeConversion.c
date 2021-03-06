/* This program converts a given time in AM/PM format to military (-hour) time */

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    //char* time = (char *)malloc(10240 * sizeof(char));
    //scanf("%s",time);

    int hh, mm, ss ;
    char t12[3];
    scanf("%d:%d:%d%s", &hh, &mm, &ss, t12) ;

    if (strcmp(t12,"PM") == 0 && hh != 12) hh += 12 ;
    if (strcmp(t12,"AM") == 0 && hh == 12) hh = 0 ;

    printf("%02d:%02d:%02d", hh, mm, ss) ;
    return 0;
}
