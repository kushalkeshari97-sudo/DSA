class Solution {
public:
    char repeatedCharacter(string s) {
        vector<bool> arr(26, false);
        for(char ch:s){
            if(arr[ch -'a']){
                return ch;
            }
            arr[ch-'a']=true;
        }
        return ' ';
    }
};