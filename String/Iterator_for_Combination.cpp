class CombinationIterator {
public:
    string str;
    int c = 0;
    int combine_len = 0;
    vector<int> bit_map;
    bool has_next = true;
    CombinationIterator(string characters, int combinationLength)
    {
        str = characters;
        combine_len = combinationLength;
        bit_map.resize(str.size(),0);
        for(int i=0;i<combinationLength;i++)
            bit_map[i] = 1;   
    }
    string next() {
        string ans;
        for(int i=0;i<bit_map.size();i++){
            if(bit_map[i] == 1){
                ans += str[i];
            }
        }
        c++;
        if(combine_len == bit_map.size())
        {
            has_next = false;
        }
        if(combine_len == 1)
        {
            if(c == bit_map.size())
                has_next = false;
        }
        int bit_size = bit_map.size();
        if(bit_map[bit_size-1] == 0)
        {
            for(int i=bit_size-1;i>=0;i--)
            {
                if(bit_map[i] == 1)
                {
                    bit_map[i+1] = 1;
                    bit_map[i] = 0;
                    break;
                }
            }
        }
        else if(bit_map[bit_size-1] == 1)
        {
            int count =1;
            
            for(int i=bit_size-2;i>=0;i--)
            {
                if(bit_map[i] == 1)
                {
                    if(bit_map[i+1] == 0)
                    {
                        bit_map[i] = 0;
                        bit_map[i+1] = 1;
                        for(int j = i+2; j<bit_size; j++)
                        {
                            if(count>0)
                            {
                                bit_map[j] = 1;
                                count--;
                            }
                            else
                            {
                                bit_map[j] = 0;
                            }
                        }
                        break;
                    }
                    else
                    {
                        count++;
                    }
                    if(count == combine_len)
                        if(combine_len == 1)
                        {
                            if(i == bit_size-1)
                                has_next = false;
                        }else
                            has_next = false;
                }
                
            }
            
        }
        
        return ans;
    }
    
    bool hasNext() {
        return has_next;
    }
};

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */