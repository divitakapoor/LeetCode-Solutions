class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        nums.erase(remove(nums.begin(),nums.end(),val),nums.end());
        for(int i = 0; i < nums.size(); i++) {
            cout <<"nums ="<< nums[i] << " ";
       
    }
    return nums.size();
    }
};