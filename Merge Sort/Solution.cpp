#include<bits/stdc++.h>
using namespace std;
void mergee(vector<int> &, int, int, int);

void mergeSort(vector<int> &v, int low, int high) {
    if(low>=high)
        return;
    int mid = (low+high)/2;
    mergeSort(v,low,mid);
    mergeSort(v,mid+1,high);
    mergee(v,low,mid,high);
}

void mergee(vector<int> &v, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left<=mid && right<=high) {
        if(v[left]<=v[right]) {
            temp.push_back(v[left]);
            left++;
        }
        else{
            temp.push_back(v[right]);
            right++;
        }
    }
    while(left<=mid) {
        temp.push_back(v[left]);
        left++;
    }
    while(right<=high) {
        temp.push_back(v[right]);
        right++;
    }
    for(int i=low; i<=high; i++) {
        v[i] = temp[i-low];
    }    
}

int main() {
    vector<int> v = {21,5,42,61,30,13};
    mergeSort(v,0,5);
    for(int el:v)
        cout<<el<<endl;

    return 0;
}