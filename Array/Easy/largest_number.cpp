#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    void largestNumber(vector<int> arr){
        int max = 0;
        for(int i = 0; i < arr.size();i++){
            if(arr[i] > max)
            max = arr[i];
        }
        cout << max;
    }
};
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0;i < n;i++)
    cin >> arr[i];
    Solution sol;
    sol.largestNumber(arr);
}