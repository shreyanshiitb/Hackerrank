#include <bits/stdc++.h>

using namespace std;

// Complete the theLoveLetterMystery function below.
int theLoveLetterMystery(string s)
{
    int ans,i;
    for(i=0;i<s.length()/2;i++)
    {
        while(s[i]!=s[s.length()-i-1])
        {
            
            if(s[i]>s[s.length()-i-1])
                s[i]--;
            else
                s[s.length()-i-1]--;
            
            ans++;
        }
    }
    return ans;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = theLoveLetterMystery(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

