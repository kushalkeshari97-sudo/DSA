class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int> ans;
        int depth = 0;

        for (char ch : seq) {
            if (ch == '(') {
                ans.push_back(++depth % 2);
            } else {
                ans.push_back(depth-- % 2);
            }
        }

        return ans;
    }
};