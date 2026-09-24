class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double>UnionArr;
        int n=nums1.size();
        int m=nums2.size();
        int i=0;
        int j=0;
        while(i<n&&j<m){
            if(nums1[i]<nums2[j]){
            UnionArr.push_back(nums1[i]);
            i++;}
            else{
            UnionArr.push_back(nums2[j]);
            j++;}
        }
        while(i<n){
            UnionArr.push_back(nums1[i]);
            i++;
        }
        while(j<m){
            UnionArr.push_back(nums2[j]);
            j++;
        }
        int s=UnionArr.size();
        if(s%2==0){
           return (UnionArr[s/2]+UnionArr[s/2-1])/2;
        }
        else{
            return UnionArr[s/2];

        }
    }
};