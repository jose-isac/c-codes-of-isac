/* Author       : José Isac Araujo Monção (Rasq)
 * Objective    : Converts the argument passed from Celsius to Fahrenheit.
 * Created      : 06/04/25
 * Last update  : 06/04/25
 * Architecture : x86_64
 * Compiler     : GCC(but you can compile it with any other compiler).
 * Build        : gcc -o celstofhr celstofhr.c
 * Usage        : celstofhr <integer or float number>
 * License      : See LICENSE file.
 *
 * "Eu te amo Jesus"
 *
 */

#include <err.h>    /* For better error messages */
#include <stdio.h>  /* For printing text */
#include <stdlib.h> /* For exit code macros */

float fahrenheit(float cels)
{
    return (9 * cels)/5 + 32;
}

int main(int argc, char *argv[])
{
    if (argc > 2)
        errx(EXIT_FAILURE, "Too many arguments. Only the ºC temperature is necessary.");
    else if (argc < 2)
        errx(EXIT_FAILURE, "Too few arguments. You're forgetting the ºC temperature.");
    
    float temp;
    
    /* If sscanf doesn't return the number of values parsed*/
    if ((sscanf(argv[1],"%f", &temp)) != 1)
        errx(EXIT_FAILURE, "Invalid temperature.");

    fprintf(stdout, "%.2f\n", fahrenheit(temp));

    return EXIT_SUCCESS;
}
