class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        int j=n-1;
        int swaps=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                while(i<j&&nums[j]==0){
                    j--;
                }
                if(i<j){
                    swap(nums[i],nums[j]);
                        swaps++;
                        
                    }
                }
        }
        return swaps;
    }
};