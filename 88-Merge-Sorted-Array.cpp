class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int j=0;
        nums1.erase(nums1.begin()+(m),nums1.begin()+(n+m));
        while(j<n){
            nums1.push_back(nums2[j]);
            j++;
    }
    sort(nums1.begin(),nums1.end());
    }
};