#include <stdio.h>
 
int main(){
    int N, i;
    int a_i[1000] = { 0, };
    scanf("%d", &N);
 
    for (i = 0; i < N; i++){
        scanf("%d", &a_i[i]);
    }
 
    while (1){
        int smallest_stick = a_i[0];
        int remain = 0;
 
        for (i = 0; i < N; i++){
            if (a_i[i] != 0)
                remain++; // count remaining sticks
        }
 
        if (remain == 0)
            break;
 
        printf("%d
", remain); remain = 0; // print remaining sticks
 
        for (i = 1; i < N; i++){
            if (a_i[i] < smallest_stick && a_i[i] != 0){
                smallest_stick = a_i[i];
            }
            if (smallest_stick == 0){
                smallest_stick = a_i[i];
            }
        }
 
        for (i = 0; i < N; i++){
            if (a_i[i] != 0)
                a_i[i] -= smallest_stick;
        }
    }
}
