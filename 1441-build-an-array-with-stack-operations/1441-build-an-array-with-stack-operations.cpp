class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> out;
        int curr = 1;

        for (int num : target) {
            while (curr < num) {
                out.push_back("Push");
                out.push_back("Pop");
                curr++;
            }

            out.push_back("Push");
            curr++;
        }

        return out;
    }
};