//https://leetcode.com/submissions/detail/673813594/
class Solution {
public:
    vector<int> partitionLabels(string s) {
        int last[26];
        // filling impact of character's
        for(int i = 0; i < s.size(); i++){
            last[s[i]-'a']=i;
        }
        
        vector<int> res;
        int ptr = 0;
        int maxi = 0;
        
        for(int i = 0; i < s.size(); i++){
            maxi = max(maxi, last[s[i]-'a']);
            if(maxi == i){
                // partition time
                res.push_back(i-ptr+1);
                ptr = i+1;
            }
        }
        return res;
    }
};