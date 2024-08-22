class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> store={-1,-1};
        int start=0;
        int end=nums.size()-1;
        while(start<=end){
            if(nums[start]==target){
                store[0]=start;
            }
            else{
                start++;
            }
            if(nums[end]==target){
                store[1]=end;
            }
            else{
                end--;
            }
            if(store[0] != -1 && store[1] != -1) {
                break;
            }

        }
    
        return store;
        
    }
};