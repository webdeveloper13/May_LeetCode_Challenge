/*First Unique Character in a String
Solution
Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.

Examples:

s = "leetcode"
return 0.

s = "loveleetcode",
return 2.
Note: You may assume the string contain only lowercase letters.
*/


class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> um1;
        for(char c: s)
        {
                um1[c]++;
        }
        
        for(int i=0;i<s.length();i++)
        {
                if(um1[s[i]]==1)
                        return i;
                        
                        
        }
            
        return -1;    
    }
};