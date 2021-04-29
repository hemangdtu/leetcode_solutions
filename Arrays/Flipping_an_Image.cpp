class Solution {
public:
    void reverse(vector<int> &nums, int size)
    {
        for(int i = 0; i<size/2; i++)
            swap(nums[i], nums[size-i-1]);
    }
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i = 0; i<image.size(); i++)
            reverse(image[i], image[i].size());
        for(int i = 0; i<image.size(); i++)
        {
            for(int j = 0; j<image[i].size(); j++)
            {
                if(image[i][j] == 0)
                    image[i][j] = 1;
                else
                    image[i][j] = 0;
            }
        }
        return image;
    }
};