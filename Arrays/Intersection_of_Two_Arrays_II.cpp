class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() > nums2.size())
            return intersect(nums2, nums1);
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> result;
        auto it = nums2.cbegin();
        for(int i : nums1)
        {
            it = lower_bound(it, nums2.cend(), i);
            if(it != nums2.end() && *it == i)
                result.emplace_back(*it++);
        }
        return result;
    }
};