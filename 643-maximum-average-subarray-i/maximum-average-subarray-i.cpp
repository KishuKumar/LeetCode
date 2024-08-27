class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        // float sum=0;
        // float max=0;
        // for(int i=0;i<nums.size();i++){
        //     int j=i;
        //     while(j<(i+k) && (i+k)<=nums.size() ){
        //         sum+=nums[j];
        //         j++;
        //     }
        //     float average=sum/k;
        //     if(max<average){
        //         max=average;
        //     }
        //     sum=0;
        // }
        // return max;
        
        int n = nums.size();
        int sum = 0;

        for(int i = 0; i < k; i++) {
            sum += nums[i];
        };

        int maxSum = sum;
        for(int i = k; i < n; i++) {
            sum = sum + nums[i] - nums[i-k];
            maxSum = max(maxSum, sum);
        }

        return (double) maxSum / k;
    }

    
};