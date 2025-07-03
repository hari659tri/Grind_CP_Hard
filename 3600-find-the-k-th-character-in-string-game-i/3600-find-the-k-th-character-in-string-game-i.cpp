class Solution {
public:
    char kthCharacter(int k) {
        
        std::string word = "a";
        
        
        while (word.length() < k) {
            std::string next_word = "";
            
            for (char c : word) {
                
                next_word += (c == 'z') ? 'a' : c + 1;
            }
            
            word += next_word;
        }
        
        
        return word[k - 1];
    }
};


