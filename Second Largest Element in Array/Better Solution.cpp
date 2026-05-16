#include<bits/stdc++.h>
using namespace std;

/*
Brute force would be to sort [O(NlogN)] and access the second last element
Better solution: O(2N)
*/

int secondHighest(string s) {
    int largest = -1;
    for(char ch:s) {
        if(isdigit(ch)){
            int el = ch-'0';
            if(el>largest)
                largest=el;
        }
    }
    int slargest = -1;
    for(char ch:s) {
        if(isdigit(ch)){
            int el = ch-'0';
            if(el>slargest && el!=largest)
                slargest=el;
        }
    }
    return slargest;
}

int main() {
    string s = "fg1d24g7s75ssfg";
    cout<<secondHighest(s)<<endl;

    return 0;
}