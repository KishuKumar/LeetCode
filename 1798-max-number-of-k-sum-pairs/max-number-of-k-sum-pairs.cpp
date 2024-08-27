class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        // int count=0;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]+nums[j]==k){
        //             count++;
        //             nums.erase(nums.begin()+j);
        //             nums.erase(nums.begin()+i);
        //             i=-1;
        //             break;
                    
        //         }
        //     }
        // }
        // return count;
 unordered_map<int, int> countMap;
        int maxOps = 0;

        // Iterate through each number in nums
        for (int num : nums) {
            int complement = k - num;

            // If frequency is greater than 0 of the number in map , we can form a pair
            if (countMap[complement] > 0) {
                maxOps++;  // We found a valid pair
                countMap[complement]--;  // Decrease the count for the complement
            }       
            else {
                // Otherwise,insert & increase the count(frequency) of the current number in the map
                countMap[num]++;
            }
        }

        return maxOps;
        
    }
};