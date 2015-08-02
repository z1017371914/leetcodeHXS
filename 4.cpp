/*找寻两个有序数组的中位数*////
///vector的erase用法是不是可以完善
///思路 先实现找到两个数组的第k个数值

double findKth(vector<int> nums1,vector<int> nums2,int k){
    if(nums1.size()>nums2.size())  /////每一次都假设nums1较小 不然 转换顺序
        return findKth(nums2, nums1,k);
    if(nums1.size()==0)      ///循环结束条件 nums1为0 或者 k是1
        return nums2[k-1];
    if(k==1)
        return min(nums1[0],nums2[0]);
    int pa = min(k/2,(int)nums1.size());
    int pb = k-pa;
    if(nums1[pa-1]<nums2[pb-1]){
        nums1.erase(nums1.begin(),nums1.begin()+pa-1);
        nums1.erase(nums1.begin());
        return findKth(nums1,nums2 , k-pa);
    }
    else if(nums1[pa-1]>nums2[pb-1]){
        nums2.erase(nums2.begin(),nums2.begin()+pb-1);
        nums2.erase(nums2.begin());
        return findKth(nums1, nums2, k-pb);
    }
    else{
        return nums1[pa-1];
    }
}
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int total = int(nums1.size()+nums2.size());
        if(total & 0x1){
            return findKth(nums1, nums2, total/2+1);
        }
        else{
            return (findKth(nums1, nums2, total/2)+findKth(nums1, nums2, total/2+1))/2.0;
        }
    }
};
