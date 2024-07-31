class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector <bool> result;
        int maxi=INT_MIN;
        for(int i=0;i<candies.size();i++)
        {
            maxi=max(maxi,candies[i]);
        }
        for(int i=0;i<candies.size();i++)
        {
            candies[i]=candies[i]+extraCandies;
           if(candies[i]>=maxi)
           {
            result.push_back(true);
           }
           else{
            result.push_back(false);
           }
        }
        return result;
    }
};