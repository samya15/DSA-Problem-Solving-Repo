#include<bits/stdc++.h>
using namespace std;

// TC = O(N)
// SC = O(1)
/*
Brute force: Insert elements into a set in one loop, then transfer the elements to the array in next loop.
Set insertion = O(logN). Total TC = O(NlogN + N) and SC = O(N)
*/

int removeDuplicatesAndReturnSize(vector<int>& arr) {
    int n = arr.size();
    int i=0;

    for(int j=1; j<=n-1; j++) {
        if(arr[i]!=arr[j]) {
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
    
}

int main() {
    vector<vector<int>> testCases = {
    // 🔹 Basic Cases
    {1, 2, 3, 4, 5},              // No duplicates
    {1, 1, 1, 1},                 // All elements same

    // 🔹 Mixed Duplicates
    {1, 2, 2, 3, 4, 4, 5},        // Scattered duplicates
    {1, 1, 2, 3, 3, 4, 5, 5},     // Multiple duplicate groups

    // 🔹 Larger Variety
    {10, 10, 20, 30, 30, 40, 50, 50, 60},
    {7, 7, 7, 8, 8, 9, 9, 9},     // Heavy repetition

    // 🔹 Special Patterns
    {1, 1, 2, 2, 3, 3, 4},        // Sequential duplicates
    {100, 100, 200, 200, 300, 400, 400, 500},

    // 🔹 Stress Test
    {1, 1, 2, 2, 3, 3, 4, 4, 5, 5}, // Many duplicates
    {0,0,1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9} // Larger range with duplicates
};

    for(auto el:testCases) {
        int sz = removeDuplicatesAndReturnSize(el);
        for(int i=0; i<sz; i++) {
            cout<<el[i]<<endl;
        }
        cout<<endl;
    }

    return 0;
}