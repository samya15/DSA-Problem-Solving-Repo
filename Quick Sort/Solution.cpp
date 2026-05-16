#include<bits/stdc++.h>
using namespace std;

// TC = O(NlogN) but Worst case is O(N^2)
// SC = O(1) (AI: but if we take stack space into consideration, SC for best and av. would be logN and worst will be N)

int findPI(vector<int>&, int, int);

void QuickSort(vector<int>& arr, int low, int high) {
    if (low<high) {
        int PI = findPI(arr, low, high);
        QuickSort(arr, low, PI-1);
        QuickSort(arr, PI+1, high);
    }
}

int findPI(vector<int>& arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j) {
        while(arr[i]<=pivot && i<=high-1) {
            i++;
        }
        while(arr[j]>pivot && j>=low+1) {
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[j], arr[low]);
    return j;
}

int main() {
    vector<int> arr = {2,5,3,3,2,2,4,4,5,6,1,1,6,6,5,3,6,3,4,2};
    // 1,1,2,2,2,2,3,3,3,3,4,4,4,5,5,5,6,6,6,6
    QuickSort(arr,0,arr.size()-1);
    for(int el:arr) {
        cout<<el<<endl;
    }

    return 0;
}