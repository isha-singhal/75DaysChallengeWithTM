//https://leetcode.com/submissions/detail/672848943/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Bayer Moore Algorithm
        int cnt =0;
        int candidate = nums[0];
        int n = nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]==candidate){
                cnt++;
            }
            else{
                cnt--;
                if(cnt<0){
                    candidate=nums[i];
                    cnt=0;
                }   
            }
        }
        return candidate;
    }
};