 /*Ransom Note
Solution
Given an arbitrary ransom note string and another string containing letters from all the magazines, write a function that will return true if the ransom note can be constructed from the magazines ; otherwise, it will return false.

Each letter in the magazine string can only be used once in your ransom note.

Note:
You may assume that both strings contain only lowercase letters.

canConstruct("a", "b") -> false
canConstruct("aa", "ab") -> false
canConstruct("aa", "aab") -> true
*/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
            unordered_map<char,int> m1;
            unordered_map<char,int> m2;
            for(char r:ransomNote)
            {
                    m1[r]++;
            }
            
            for(char m:magazine)
            {
                    m2[m]++;
            }
            
            for(char r:ransomNote)
            {
                    if(m2[r]<m1[r])
                            return false;
            }
            
            return true;
        
    }
};