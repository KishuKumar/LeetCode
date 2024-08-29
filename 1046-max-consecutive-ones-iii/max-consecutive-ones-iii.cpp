class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int count=0;
        int k2=0;
        int maxi=0;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i;j<nums.size();j++){
        //             if(nums[i]!=0){
        //                 count++;
        //             }
        //             while(nums[i]==0 && k2<=k ){
        //             nums.at(nums[i])=1;
        //             k++;
        //             count++;
        //         }
                
        //     }
        //     maxi=max(count,maxi);
        //     count=0;
        // }
        // return maxi;
//         for (int i = 0; i < nums.size(); i++) {
//     for (int j = i; j < nums.size(); j++) {
//         if (nums[j] != 0) {
//             count++;
//         } else if (k2 < k) {
//             k2++;
//             count++;
//         } else {
//             break;
//         }
//     }
//     maxi = max(count, maxi);
//     count = 0;
//     k2 = 0; // Reset k2 for the next subarray starting at i+1
// }
// return maxi;
int left = 0, right = 0;
    int maxLength = 0;
    int zerosCount = 0;

    // Traverse the array with the right pointer
    while (right < nums.size()) {
        if (nums[right] == 0) {
            zerosCount++;
        }

        // If the count of zeros exceeds k, move the left pointer to the right
        while (zerosCount > k) {
            if (nums[left] == 0) {
                zerosCount--;
            }
            left++;
        }

        // Update the maximum length found
        maxLength = max(maxLength, right - left + 1);

        // Move the right pointer to the right
        right++;
    }

    return maxLength;
    }
};