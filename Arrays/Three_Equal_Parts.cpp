class Solution {
public:
    vector<int> threeEqualParts(vector<int>& A) {
        int size = A.size();
        int countOfOne = 0;
        for (auto c : A)
            if (c == 1)
                countOfOne++;

        if (countOfOne == 0)
            return {0, size-1};
        
        if (countOfOne%3 != 0)
            return {-1, -1};
        int k = countOfOne / 3;
        int i;
        for (i = 0; i < size; ++i) 
            if (A[i] == 1)
                break;
        int begin = i;
        int temp = 0;
        for (i = 0; i < size; ++i) {
            if (A[i] == 1)
                temp++;
            if (temp == k + 1)
                break;
        }
        int mid = i;
        temp = 0;
        for (i = 0; i < size; ++i) {
            if (A[i] == 1)
                temp++;
            if (temp == 2*k+1)
                break;
        }
        int end = i;
        while (end < size && A[begin] == A[mid] && A[mid] == A[end]) {
            begin++, mid++, end++;
        }
        if (end == size)
            return {begin-1, mid};
        else 
            return {-1, -1};

    }
};