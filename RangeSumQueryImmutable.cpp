class NumArray {
public:
    NumArray(vector<int> &nums) {
        this->nums = nums;
        this->length = (int)nums.size();
        d = new int[length];
        for (int i=0; i<length; i++) {
            if (i==0) {
                d[0]=nums[0];
            }else{
                d[i]=d[i-1]+nums[i];
            }
        }
        
    }
    
    int sumRange(int i, int j) {
        return d[j]-d[i]+nums[i];
    }
    vector<int> nums;
    int *d;
    int length;
    
    
    
};
// Your NumArray object will be instantiated and called as such:
// NumArray numArray(nums);
// numArray.sumRange(0, 1);
// numArray.sumRange(1, 2);
