class Solution {
public:
    string decodeString(string s) {
        string result;
        stack<string> str;
        int n = s.size();
        stack<int> nums;
        for(int i = 0; i<n; i++)
        {
            if(isdigit(s[i]))
            {
                int i0 = i;
                while(i<n && isdigit(s[i])) i++;
                int num = stoi(s.substr(i0, i-i0));
                nums.push(num);
                str.push(result);
                result = "";
            }
            else if(s[i]==']')
            {
                int num = nums.top();
                nums.pop();
                string temp;
                for(int i = 0; i<num; i++) temp += result;
                result = str.top() + temp;
                str.pop();
            }
            else result.push_back(s[i]);
        }
        return result;
    }
};