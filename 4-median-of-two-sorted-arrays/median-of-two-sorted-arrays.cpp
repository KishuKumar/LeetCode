class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int> merged(n+m);
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),merged.begin());
        sort(merged.begin(),merged.end());
        int o=merged.size();
        if(o%2==1)
        {
            
            return (double)merged[o/2];
        }
        else{
            double median=((double)merged[o/2]+(double)merged[(o/2)-1])/2.0;
            return median;
        }
        
        

    }    
    
};