class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans=0,n=nums.size(),curr=0,prev=-1; // setting prev=-1 to handle if there are no 0s
        for(int i=0;i<n;i++){
            if(nums[i]){
                curr++; // just increament current count of 1
            }else{
                // after encountering 0, set prev count to current count and current count to 0
                prev=curr; 
                curr=0;
            }
            ans=max(ans,curr+prev); // update max count of 1s in each iteration
        }
        return ans;
    }
    
};