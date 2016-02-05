class Solution {  ////想法很奇妙，分别把从两端开始求，然后从两边那个较小的边开始移动遇到比较大的边求一下面积
public:
    int maxArea(vector<int>& height) {
        int low =0;
        int high = height.size()-1;
        int res = 0;
        while (low<high) {
            res = max(res,min(height[low],height[high])*(high-low));
            if (height[low]<height[high]) {
                int temp = low;
                while (temp<high&&height[temp]<=height[low]) {
                    temp++;
                }
                low = temp;
            }
            else{
                int temp  = high;
                while (temp>low&&height[temp]<=height[high]) {
                    temp--;
                }
                high = temp;
            }
        }
        return res;
    }
};
