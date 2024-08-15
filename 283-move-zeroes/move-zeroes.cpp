
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size()-1;j++){
                if(nums[j]==0 && nums[j+1] !=0){
                    std::swap(nums[j],nums[j+1]);
                }
            }
        }
        for(int i=0;i<nums.size();i++){
           std:: cout<<nums[i]<<" ";
        }
    }
};