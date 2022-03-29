//https://leetcode.com/submissions/detail/669468524/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //similar to Dutch Flag problem used for sorting 0's 1's and 2's in an array
        int len = nums.size();
        int zeroIndex=0;
        int numIndex=0;
        while(numIndex<len){
            if(nums[numIndex]==0){
                numIndex++;
            }
            else if(nums[numIndex]!=0){
                if(numIndex==zeroIndex){
                    numIndex++;
                    zeroIndex++;
                }
                else{
                    nums[zeroIndex]=nums[numIndex];
                    nums[numIndex]=0;
                    numIndex++;
                    zeroIndex++;
                }
            }
        }
        
    }
};