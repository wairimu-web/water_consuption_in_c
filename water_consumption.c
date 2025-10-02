/*
NAME: SAMUEL NJOROGE 
REG: CT101/G/26428/25
DESCRIPTION: Check for exam eligibility
*/

#include <stdio.h>

int main() {
    float Unit;
    float Price;
    
    printf("Enter Unit: ");
    scanf("%f", &Unit);
    
    if (Unit <= 30) {
        Price = 20 * Unit;
    } 
    else if (Unit <= 60) {
        Price = 25 * Unit;
    }
    else {
        Price = 30 * Unit;
    }
    
    printf("Total Price = %.2f\n", Price);
    
    return 0;
}
