class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int n=distance.size();
        int cost1=0;
        int cost2=0;
        int totalcost=0;
        for(int i=0;i<n;i++){
            totalcost=totalcost+distance[i];
        }
        if(start>destination){
            swap(start,destination);
        }
        for(int i=start;i<destination;i++){
           cost1=cost1+distance[i];
        }
            cost2=totalcost-cost1;
        return min(cost1,cost2);
    }
};