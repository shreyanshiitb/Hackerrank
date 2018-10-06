#include <cmath>
#include <iostream>
#include <string>
using namespace std;
 
int smallestReplacement(string gene, int n);
 
int main() {
    int n;  // gene length
    cin >> n;
    string gene;  // gene
    cin >> gene;     
    cout << smallestReplacement(gene, n) << endl;
    return 0;
}
 
/* Finds the length of the smallest substring replacement that 
 * makes a gene, represented as a string of length n, into a 
 * steady gene */
int smallestReplacement(string gene, int n) {
    int subLength = 0;  // substring length 
    int A = 0, C = 0, G = 0, T = 0;  // gene letter counts
    for (int i = 0; i < gene.length(); i++) {
        char x = gene.at(i);
        if (x == 'A') A++;
        if (x == 'C') C++;
        if (x == 'G') G++;
        if (x == 'T') T++;
    }
    int steady = n/4;  // letter count needed for a steady gene
    if (A != steady || C != steady || G != steady || T != steady) 
    {
        subLength = n+1;  // set to max
        // scan the gene to find the smallest subLength 
        for (int right = 0, left = 0; right < n; right++) { 
            char y = gene.at(right);
            if (y == 'A') A--;
            if (y == 'C') C--;
            if (y == 'G') G--;
            if (y == 'T') T--;
            while (A <= steady && C <= steady && G <= steady 
                   && T <= steady && left <= right) {
                subLength = min(subLength, right-left + 1);
                char z = gene.at(left);
                if (z == 'A') A++;
                if (z == 'C') C++;
                if (z == 'G') G++;
                if (z == 'T') T++;
                left++;
            }
        }
    }
    return subLength;
}
