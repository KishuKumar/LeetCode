class Solution {
public:
    string removeStars(string s) {
        std::string result;
        for(int i=0;i<s.size();i++){
            if(s[i]!='*'){
                result.push_back(s[i]);
            }
            else{
                if(i>0 && result.size()>0){
                    result.pop_back();
                }
            }
        }
        return result;
    }
};