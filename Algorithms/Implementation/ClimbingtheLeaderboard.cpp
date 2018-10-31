#define mx 200000
int s[mx+1];
int rank[mx+1];

void build_rank(int n){
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            rank[i] = 1;
        }
        else {
            if (s[i] == s[i-1]) {
                rank[i] = rank[i - 1];
            }
            else {
                rank[i] = rank[i - 1] + 1;
            }
        }
    }
}
