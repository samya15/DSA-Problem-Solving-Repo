#include<bits/stdc++.h>
using namespace std;

void leftRotate(vector<int>& arr) {
    int temp = arr[0];
    int n=arr.size();
    for(int i=1; i<n; i++) {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}

int main() {
    vector<int> v = {1,2,3,4,5,6};
    leftRotate(v);
    for(int el:v) {
        cout<<el<<endl;
    }

    return 0;
}