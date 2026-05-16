#include<bits/stdc++.h>
using namespace std;

int findLargestEl(vector<int>& arr) {
    int largest = arr[0];
    for(int el:arr) {
        if(el>largest)
            largest = el;
    }
    return largest;
}

int main() {
    vector<int> v = {1, 2, 4, 7, 7, 5};
    cout<<findLargestEl(v)<<endl;

    return 0;
}