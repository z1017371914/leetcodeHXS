class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int num1 = 0;
        for(int i=0;i<nums.size();i++){
            if(count == 0){
                num1 = nums[i];
                count = 1;
            }else{
                if(nums[i]==num1){
                    count++;
                }else{
                    count--;
                }
                
            }
        }
        return num1;
    }
};
