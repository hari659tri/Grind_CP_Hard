class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) return "";

        // Take first string as reference
        for (int i = 0; i < strs[0].size(); i++) {
            char ch = strs[0][i];

            // Compare with all other strings
            for (int j = 1; j < strs.size(); j++) {
                // If index out of range OR character mismatch
                if (i >= strs[j].size() || strs[j][i] != ch)
                    return strs[0].substr(0, i);
            }
        }
        return strs[0];  // entire first string is common prefix
    }
};
