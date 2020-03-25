#include <cs50.h>
#include <stdio.h>
#include <math.h>

float promptPositiveValue(void) {
    float changeAmount;
    bool isNegative = true;

    while (isNegative) {
        changeAmount = get_float("Amount: ");

        if (changeAmount > 0) {
            isNegative = false;
        }
    }
    return changeAmount;
}

int trackCoinAmount() {
    int centsValue = round(promptPositiveValue() * 100);
    int coinsValue = 0;
    int remainderValue = 0;
    int tempValue;
    int QUARTER = 25;
    int DIME = 10;
    int NICKEL = 5;
    int PENNY = 1;

    if(centsValue >= QUARTER) {
        remainderValue = centsValue % QUARTER;
        tempValue = centsValue - remainderValue;
        coinsValue = coinsValue + (tempValue / QUARTER);
        centsValue = remainderValue;
    }

    if(centsValue >= DIME) {
        remainderValue = centsValue % DIME;
        tempValue = centsValue - remainderValue;
        coinsValue = coinsValue + (tempValue / DIME);
        centsValue = remainderValue;
    }

    if(centsValue >= NICKEL) {
        remainderValue = centsValue % NICKEL;
        tempValue = centsValue - remainderValue;
        coinsValue = coinsValue + (tempValue / NICKEL);
        centsValue = remainderValue;
    }   

    if(centsValue >= PENNY) {
        remainderValue = centsValue % PENNY;
        tempValue = centsValue - remainderValue;
        coinsValue = coinsValue + (tempValue / PENNY);
        centsValue = remainderValue;
    }  

    return coinsValue;
}

int main(void) {
    printf("%i\n", trackCoinAmount());
}
