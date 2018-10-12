#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p) {
    /*
     * Write your code here+.
     */
    int count=0,i;
    if(p<=n/2)
    {
       
        for(i=1;i<=n;i+=2)
        {
            if(i>=p)
                break;
            count++;
        }
    }
    else
    {
        if(n%2==1)
        {
            n--;
        }
       for(i=n;i>=1;i-=2)
        {
            if(i<=p)
                break;
          
            count++;
        }
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}
