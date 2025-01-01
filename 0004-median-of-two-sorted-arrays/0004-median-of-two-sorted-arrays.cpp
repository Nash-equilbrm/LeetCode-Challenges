class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size = nums1.size() + nums2.size();
        int i1 = 0;
        int i2 = 0;
        vector<int> merged;
        while(i1 < nums1.size() || i2 < nums2.size()){
            int next;
            if(i1 < nums1.size() && (i2 < nums2.size() && nums1[i1] <= nums2[i2] || i2 >= nums2.size())){
                next = nums1[i1];
                i1++;
            }
            else if(i2 < nums2.size() && (i1 < nums1.size() && nums2[i2] < nums1[i1] || i1 >= nums1.size())){
                next = nums2[i2];
                i2++;
            }
            //cout<<next<<endl;
            merged.push_back(next);
            if(merged.size() > (int)size/2) break;
        }
        int index = merged.size() - 1;
        return (size % 2 == 1) ? merged[index] : ((float)(merged[index] + merged[index - 1]))/2;
    }

};