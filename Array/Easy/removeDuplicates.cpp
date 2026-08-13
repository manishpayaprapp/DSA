#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int n = nums.size();
        for(int j = 1;j < n;j++){
            if(nums[i] != nums[j]){
                i++;
                nums[i] = nums[j];
            }   
        }
        return i+1;
    }
};
int main(){
    vector<int> arr = {1,1,2,2,2,2,3,4};
    Solution sol;
    cout << sol.removeDuplicates(arr);
}