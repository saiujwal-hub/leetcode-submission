class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1 = 0;
        int c2 = 0;
        int el1;
        int el2;
        vector<int> v;
        for (int i = 0; i < nums.size(); i++) {
            if (c1 == 0 && el2 != nums[i]) {
                c1 = 1;
                el1 = nums[i];

            } else if (c2 == 0 && el1 != nums[i]) {
                c2 = 1;
                el2 = nums[i];

            } else if (el1 == nums[i]) {
                c1++;

            } else if (el2 == nums[i]) {
                c2++;

            } else {
                c1--;
                c2--;
            }
        }

        int k = 0;
        int d = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == el1) {
                k++;
            }
            if (nums[i] == el2) {
                d++;
            }
        }
        if (k > nums.size() / 3) {
            v.push_back(el1);
        }
        if (d > nums.size() / 3) {
            v.push_back(el2);
        }
        return v;
    }
};
