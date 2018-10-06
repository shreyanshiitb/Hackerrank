#include <bits/stdc++.h>

using namespace std;

// Complete the viralAdvertising function below.
int viralAdvertising(int n) {

long long s,lc=0;

    s=5;
    while(n--)
    {
        lc+=s/2;
        s=s/2*3;
        }
 return lc;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = viralAdvertising(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
