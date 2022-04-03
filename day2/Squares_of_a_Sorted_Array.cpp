//https://leetcode.com/submissions/detail/669841783/
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n= nums.size();
        vector<int> res(n);
        int i =0;
        int j = n-1;
        int k = n-1;
        while(i<=j){
             res[k--]= max(nums[i]*nums[i],nums[j]*nums[j]);
            if(abs(nums[i]) < abs(nums[j])) {
                j--;
            } else{
                i++;
            }
        }
        
        return res;
    }
};