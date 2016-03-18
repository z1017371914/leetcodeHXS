class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int start1 = m-1;
        int start2 = n-1;
        int startNew = m+n-1;
        int temp;
        while(start1>=0||start2>=0){
            if(start1<0)
                temp = nums2[start2--];
            else if(start2<0){
                temp = nums1[start1--];
            }
            else{
                if(nums1[start1]>=nums2[start2]){
                    temp = nums1[start1--];
                }else{
                    temp = nums2[start2--];
                }
            }
            nums1[startNew--]=temp;
            
        }
    }
};
