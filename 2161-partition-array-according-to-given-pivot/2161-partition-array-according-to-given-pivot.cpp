class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> less;
        vector<int> greater;
        vector<int> equal;
        for(auto i: nums){
            if(i < pivot){
                less.push_back(i);
            }
            else if(i > pivot){
                greater.push_back(i);
            }
            else if(i == pivot){
                equal.push_back(i);
            }
        }

        vector<int> res;
        res.reserve(less.size() + equal.size() + greater.size());
        res.insert(res.end(), less.begin(), less.end());
        res.insert(res.end(), equal.begin(), equal.end());
        res.insert(res.end(), greater.begin(), greater.end());

        return res;
    }
};