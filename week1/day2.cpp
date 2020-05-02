/*
Jewels and Stones
Solution
You're given strings J representing the types of stones that are jewels, and S representing the stones you have.  Each character in S is a type of stone you have.  You want to know how many of the stones you have are also jewels.

The letters in J are guaranteed distinct, and all characters in J and S are letters. Letters are case sensitive, so "a" is considered a different type of stone from "A".

Example 1:

Input: J = "aA", S = "aAAbbbb"
Output: 3
Example 2:

Input: J = "z", S = "ZZ"
Output: 0
Note:

S and J will consist of letters and have length at most 50.
The characters in J are distinct.
*/

//Solution 1 using unordered map

class Solution {
public:
    int numJewelsInStones(string J, string S) {
            int count = 0;
            unordered_map<char,int> m1;
            for(char j:J)
            {
                    m1[j]++;
            }
            
            for(char s:S)
            {
                    if(m1[s])
                    {
                            count = count + m1[s];
                    }
                            
            }
        
            return count;
    }
};


//Solution 2:  Normal brute force approach

class Solution {
public:
    int numJewelsInStones(string J, string S) {
            int count=0;
            int m = S.length();
            int n = J.length();
            for(int i=0;i<m;i++)
            {
                    for(int j=0;j<n;j++)
                    {
                            if(S[i]==J[j])
                            {
                                    count++;
                                    break;
                            }
                    }
            }
            
            return count;
        
    }
};