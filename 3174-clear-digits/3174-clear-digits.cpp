class Solution {
public:
    string clearDigits(string s) {
        string ch;
        for(char chr : s){
            if (isdigit(chr)) {
                if (!ch.empty())
                    ch.pop_back();
            }
            else{
                ch.push_back(chr);
            }
        }
        return ch;
    }
};