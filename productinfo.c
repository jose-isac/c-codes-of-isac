#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float price;
    int item, day, month, year;
    
    printf("Enter item number: "); 
    scanf("%d", &item);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);
    return EXIT_SUCCESS;
}
