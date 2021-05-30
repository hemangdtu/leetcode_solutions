class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int result = 0;
        int i = 0, n = heights.size();

        while(i < n)
            if(st.empty() || heights[st.top()] <= heights[i])
                st.push(i++);
            else
            {
                int top = st.top();
                st.pop();
                int area = 0;
                if(st.empty())
                    area = heights[top] * i;
                else
                    area = heights[top] * (i - st.top() - 1);
                result = max(result, area);
            }

        while(!st.empty())
        {
            int top = st.top();
            st.pop();
            int area = 0;
            if(st.empty())
                area = heights[top] * i;
            else
                area = heights[top] * (i - st.top() - 1);
            result = max(result, area);
        }
        return result;
    }
};