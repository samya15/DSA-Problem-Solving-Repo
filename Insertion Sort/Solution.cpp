#include<bits/stdc++.h>
using namespace std;

// TC ≈ O(N^2)    for Best and Average cases
// TC = O(N)      for Best case

/*
Striver did this: Looks better
for....
    int j=i;
    while(j>0 && arr[j]<arr[j-1]) {
        swap(arr[j],arr[j-1]),
        j--;
    }
*/

void insertionSort(int arr[], int n) {
    for(int i=0; i<=n-1; i++) {
        for(int j=i; j>0; j--){
            if(arr[j]<arr[j-1])
                swap(arr[j],arr[j-1]);
            else
                break;
        }
    }
}

int main() {
    int arr[6] = {21,5,42,61,30,13};
    insertionSort(arr,6);
    for(int el:arr)
        cout<<el<<endl;

    return 0;
}