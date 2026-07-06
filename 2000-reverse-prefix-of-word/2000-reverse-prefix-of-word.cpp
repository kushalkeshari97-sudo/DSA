class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char> s;
        string ans = "";
        int i = 0;

        while (i < word.size() && word[i] != ch) {
            s.push(word[i]);
            i++;
        }

        if (i == word.size())
            return word;

        ans += word[i];

        while (!s.empty()) {
            ans += s.top();
            s.pop();
        }

        i++;

        while (i < word.size()) {
            ans += word[i];
            i++;
        }

        return ans;
    }
};