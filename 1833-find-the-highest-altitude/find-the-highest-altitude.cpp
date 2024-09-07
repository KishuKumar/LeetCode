class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max=0;
        int prefix=0;
        for(int i=0;i<gain.size();i++){
            prefix=prefix+gain[i];
            if(prefix> max){
                max=prefix;
            }
        }
        return max;

    }
};