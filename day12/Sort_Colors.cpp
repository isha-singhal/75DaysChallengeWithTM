//https://leetcode.com/submissions/detail/673826676/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        //Dutch flag algo
        int n = nums.size();
        if(n==0)return;
        int l =0;
        int h = n-1;
        int m = 0;
        while(m<=h){
            if(nums[m]==1){
                m++;
            }
            else if(nums[m]==0){
                swap(nums[l],nums[m]);
                l++;
                m++;
            }
            else if(nums[m]==2){
                swap(nums[h],nums[m]);
                h--;
            }
        }
           
    }
};