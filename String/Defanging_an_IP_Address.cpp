class Solution {
public:
    string defangIPaddr(string address) {
        if (address.length() == 0)
            return address;
        if (address[0] == '.')
        {
            string smallOutput = defangIPaddr(address.substr(1));
            return "[.]" + smallOutput;
        }
        else
            return address[0] + defangIPaddr(address.substr(1));
    }
};