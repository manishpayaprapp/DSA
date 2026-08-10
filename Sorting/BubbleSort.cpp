#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int>& arr){
    int n = arr.size();
    while(n>0){
        int didSwap = 0;
    for(int i = 0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            didSwap = 1;
        }
    }
    n--;
    if(didSwap == 0)
    break;
    }
}
void print(vector<int> arr){
    for (int i = 0;i < arr.size();i++){
        cout << arr[i];
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bubbleSort(arr);
    print(arr);
}