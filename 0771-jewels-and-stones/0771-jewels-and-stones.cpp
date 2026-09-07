;class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int n=stones.size();
        int cnt=0;
        vector<char>v(128,0);
        for(char c:jewels){
            v[c]=1;
        }
        for(char c:stones){
            if(v[c]==1){
                cnt++;
            }
        }
        return cnt;
    }
};