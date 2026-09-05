class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0;
        int ele;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(cnt==0){
                ele=nums[i];
                cnt++;
            }
            else if(nums[i]==ele){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int cnt1;
        for(int i=0;i<n;i++){
            if(nums[i]==ele){
                cnt1++;
            }
            if(cnt1>n/2){
                return ele;
            }

        }
        return -1;
    }
};