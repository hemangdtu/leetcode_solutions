class CustomStack {
private:
    vector <int> Stack;
    vector <int> inc;
    int size;
    
public:
    CustomStack(int maxSize) {
        size = maxSize;
        inc = vector<int> (maxSize);
    }
    
    void push(int x) {
        if(Stack.size() == size)
            return;
        Stack.push_back(x);
    }
    
    int pop() {
        if(Stack.empty())
            return -1;
        else
        {
            Stack.back() += inc[Stack.size() - 1];
            
            if(Stack.size() - 1 > 0 )
                inc[Stack.size() - 2] += inc[Stack.size() - 1];
            
            inc[Stack.size() - 1] = 0;
            int x = Stack.back();
            Stack.pop_back();
            
            return x;
        }
    }
    
    void increment(int k, int val) {
        k--;
        k = min(k, (int)Stack.size() - 1);
        if(k < 0)
            return;
        inc[k] += val;
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */