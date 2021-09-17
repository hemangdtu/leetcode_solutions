class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size())
            return intersection(nums2, nums1);

        unordered_set<int> freqCount{nums1.begin(), nums1.end()};

        vector<int> result;
        for (auto& i : nums2)
        {
            if (freqCount.count(i))
            {
                result.push_back(i);
                freqCount.erase(i);
            }
        }
        return result;
    }
};