class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int offset = 30;
        vector<int> travelCost (days.back() + offset + 1, 0);
        for(int i = offset + 1; i <= days.back() + offset; ++i){
            if(!vectorContains(days, i - offset)){
                travelCost[i] = travelCost[i-1];
            }
            else{
                travelCost[i] = min({
                                travelCost[i-1] + costs[0],
                                travelCost[i-7] + costs[1],
                                travelCost[i-30] + costs[2]});
            }
        }
    
        return travelCost.back();
    }

    bool vectorContains(vector<int>& vec, int target){
        auto it = find(vec.begin(), vec.end(), target);
        return it!=vec.end();
    }

    
};