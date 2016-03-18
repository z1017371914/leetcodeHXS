class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int num=0;
        int j=0;
        for (int i=0; i<nums.size(); i++) {
            if (nums[i]==val) {
                num++;
            }
            else{
                nums[j++]=nums[i];
            }
        }
        return nums.size()-num;
    }
};
