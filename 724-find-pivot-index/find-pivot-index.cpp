class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int total_sum = 0, left_sum = 0;

    // Calculate total sum of the array
    for(int num : nums) {
        total_sum += num;
    }

    // Traverse through the array
    for(int i = 0; i < nums.size(); i++) {
        // total_sum - left_sum - nums[i] gives right sum at index i
        if (left_sum == total_sum - left_sum - nums[i]) {
            return i;
        }
        left_sum += nums[i];
    }

    // If no pivot index found
    return -1;
}
};