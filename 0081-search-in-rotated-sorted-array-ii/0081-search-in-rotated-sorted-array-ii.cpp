class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int h = nums.size() - 1;
        int mid = 0;
        while (l <= h) {
            mid = (l + h) / 2;
            if (nums[mid] == target) {
                return true;
            } else if (nums[l] <= nums[mid] && nums[h]!=nums[mid]) {

                if (nums[l]<=target && target < nums[mid]) {
                    h = mid - 1;

                } else {
                    l = mid + 1;
                }
            } else if (nums[mid]<=nums[h] && nums[l]!=nums[mid]){
                if (nums[h]>=target && target > nums[mid]) {
                    l = mid + 1;

                } else {
                    h = mid - 1;
                }
            }
            else if(nums[l]==nums[mid]&& nums[mid]==nums[h])
            {l++;
            h--;
                
            }

        }return false;
    }
};