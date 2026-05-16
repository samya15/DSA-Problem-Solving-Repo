#include<bits/stdc++.h>
using namespace std;

// TC = O(N)

int secondHighest(string s) {
    int largest = -1;
    int slargest = -1;
    for(char ch:s) {
        if(isdigit(ch)){
            int el = ch-'0';
            if(el>largest) {
                slargest = largest;
                largest = el;
            }
            else if(el>slargest && el!=largest) {
                slargest = el;
            }
        }
    }
    return slargest;
}

int main() {
    string s = "fg1d24g7s75ssfg";
    cout<<secondHighest(s)<<endl;

    return 0;
}