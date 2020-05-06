/*Majority Element
Solution
Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.

You may assume that the array is non-empty and the majority element always exist in the array.

Example 1:

Input: [3,2,3]
Output: 3
Example 2:

Input: [2,2,1,1,1,2,2]
Output: 2

*/

//solution 1 using hash maps.

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> um1;
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);    
        int ans;    
        for(int x:nums)
        {
                um1[x]++;
        }
        
        for(auto it:um1)
        {
                if(it.second>floor(nums.size()/2))
                {
                        ans = it.first;
                        break;
                }        
        }
            
        return ans;    
    }
};


//solution 2 using sorting

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> um1;
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);    
        sort(nums.begin(),nums.end());
        return nums[floor(nums.size()/2)];

    }
};