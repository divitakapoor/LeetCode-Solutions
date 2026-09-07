class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while(stones.size()>1){
            sort(stones.rbegin(),stones.rend());
            int max1=stones[0];
            int max2=stones[1];
           stones.erase(stones.begin());
           stones.erase(stones.begin());
           if(max1!=max2){
            stones.push_back(max1-max2);
           }
        }
           if(stones.empty()){
            return 0;
           }
             return stones[0];
    }
};