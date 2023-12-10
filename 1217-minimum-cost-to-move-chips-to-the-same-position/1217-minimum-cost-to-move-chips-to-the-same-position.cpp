class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int minCost=INT_MAX;
        for(int i=0;i<position.size();i++){
            int cost=0;
            for(int j=0;j<position.size();j++){
                if(abs(position[i]-position[j])%2!=0){
                    
                    cost++;
                }  
            }
            if(cost<minCost){
                minCost=cost;
            }
        }
        return minCost;
    }
};