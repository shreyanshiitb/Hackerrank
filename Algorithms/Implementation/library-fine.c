#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int ld, lm, ly, gd, gm, gy;
    int fine =0;

    scanf("%d%d%d%d%d%d", &gd, &gm, &gy, &ld, &lm, &ly);

    if(gy < ly){
        fine = 0;
    }
    else if(gy > ly){
        fine = 10000;
    }
    else if(gy == ly){
        if(gm < lm){
            fine = 0;
        }
        else if(gm > lm){
            fine = 500 * (gm - lm);
        }
        else if(gm == lm){
            if(gd <= ld){
                fine = 0;
            }
            else if(gd > ld){
                fine = 15 * (gd - ld);
            }
        }
    }

    printf("%d", fine);

    return 0;
}
