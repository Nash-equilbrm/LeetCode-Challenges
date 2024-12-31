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
                int case1 = travelCost[i-1] + costs[0];
                int case7 = travelCost[i-7] + costs[1];
                int case30 = travelCost[i-30] + costs[2];
            
                travelCost[i] = min({case1, case7, case30});
            }
        }
    
        return travelCost.back();
    }

    bool vectorContains(vector<int>& vec, int target){
        auto it = find(vec.begin(), vec.end(), target);
        // Check if the target value was found
        if (it!=vec.end())
            return true;
        return false;
    }

    
};