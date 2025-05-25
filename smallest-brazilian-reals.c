/* Author       : José Isac Araujo Monção (Rasq)
 * Objective    : Receives a brazilian reals ammount and show how to get that quantity
 *              : using the smallest number of R$200, R$100, R$50, R$20, R$10, R$5, R$2, R$1.
 * Limitations  : It only supports integer values.
 * Created      : 05/22/25
 * Last update  : 05/22/25
 * Architecture : x86_64
 * Compiler     : GCC(but you can compile it with any other compiler).
 * Build        : gcc -o smallest-brazilian-reals smallest-brazilian-reals.c 
 * License      : See LICENSE file.
 *
 * "Eu te amo Jesus"
 *
 */

#include <stdio.h>

int main(void)
{
    int amount;

    printf("Enter a brazilian reals ammount(integer value): ");
    scanf("%d", &amount);

    printf("\nR$200: %d\n", (amount / 200) );
    amount -= (amount / 200) * 200;
    printf("R$100: %d\n", (amount / 100) );
    amount -= (amount / 100) * 100;
    printf("R$50: %d\n", (amount / 50) );
    amount -= (amount / 50) * 50;
    printf("R$20: %d\n", (amount / 20) );
    amount -= (amount / 20) * 20;
    printf("R$10: %d\n", (amount / 10) );
    amount -= (amount / 10) * 10;
    printf("R$5: %d\n", (amount / 5) );
    amount -= (amount / 5) * 5;
    printf("R$2: %d\n", (amount / 2) );
    amount -= (amount / 2) * 2;
    printf("R$1: %d\n\n", (amount / 1) );

    return 0;
}

