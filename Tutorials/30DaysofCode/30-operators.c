#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    double meal_cost; 
    scanf("%lf", &meal_cost);
    int tip_percent, ans; 
    scanf("%i", &tip_percent);
    int tax_percent; 
    scanf("%i", &tax_percent);
    ans = floor(meal_cost + meal_cost*(tip_percent+tax_percent)/100 + 0.5);
    printf("The total meal cost is %d dollars.",ans);

    return 0;
}
