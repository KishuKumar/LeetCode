class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // vector<int> answer;
        // int product=1;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=0;j<nums.size();j++){
        //         if(j!=i){
        //             product*=nums[j];
        //         }
        //     }
        //     answer.push_back(product);
        //     product=1;
        // }
        // return answer;
        int n=nums.size();
        vector<int> answer(n, 1);  // Initialize the result array with 1s
    
    // Calculate left product for each element
    int leftProduct = 1;
    for (int i = 0; i < n; i++) {
        answer[i] = leftProduct;
        leftProduct *= nums[i];
    }
    
    // Calculate right product and multiply with the left product
    int rightProduct = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= rightProduct;
        rightProduct *= nums[i];
    }
    
    return answer;
    }
};