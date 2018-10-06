#include <iostream>
using namespace std;

//Global variables
long** matrix;
long M, N, R;
//================

//Matrix functions - Declaration
void initMatrix();
void inputMatrix();
void outputMatrix();
//==============

//Rotate
void rotate();
void rotate(long);
//==============



int main() {
    cin>>M>>N>>R;
    initMatrix();
    inputMatrix();
    rotate();
    outputMatrix();
    return 0;
}



//Matrix functions - Definition
void initMatrix() {
    matrix = new long* [M];
    for(long i=0; i<M; i++)
        matrix[i] = new long[N];
}

void inputMatrix() {
    for(long i=0; i<M; i++)
        for(long j=0; j<N; j++)
            cin>>matrix[i][j];
}

void outputMatrix() {
    for(long i=0; i<M; i++) {
        for(long j=0; j<N; j++) {
            cout<<matrix[i][j];
            if(j==N-1) cout<<"
";
            else cout<<" ";
        }
    }
}
//=====================================================

//Rotate - Definition
void rotate() {
    long limit = M>N?N/2:M/2;
    for(long i=0; i<limit; i++) {
    	for(long r=0; r<R%(2*(M+N-4*i-2)); r++)
    		rotate(i);
    }
}

void rotate(long diag) {
    long col, row, temp = matrix[diag][diag];
    row = col = diag;


    for(; col<N-diag-1; col++) matrix[row][col] = matrix[row][col+1];
    for(; row<M-diag-1; row++) matrix[row][col] = matrix[row+1][col];
    for(; col>diag; col--) matrix[row][col] = matrix[row][col-1];
    for(; row>diag; row--) matrix[row][col] = matrix[row-1][col];

    matrix[diag+1][diag] = temp;
}

