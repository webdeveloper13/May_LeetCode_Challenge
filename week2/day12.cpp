/*Single Element in a Sorted Array
Solution
You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once. Find this single element that appears only once.

 

Example 1:

Input: [1,1,2,3,3,4,4,8,8]
Output: 2
Example 2:

Input: [3,3,7,7,10,11,11]
Output: 10
 

Note: Your solution should run in O(log n) time and O(1) space.

*/

//solution 1 : using binary search...efficient hai yeh O(logn)
class Solution {
  
public:
    int singleNonDuplicate(vector<int>& nums) {
            ios_base::sync_with_stdio(false);
            cin.tie(NULL);
            cout.tie(NULL);
            int low = 0;
            int high = nums.size()-1;
            if(high==0)
                    return nums[0];
            else if(nums[0]!=nums[1])
                    return nums[0];
            else if(nums[high]!=nums[high-1])
                    return nums[high];
            else
            {
                    while(low<=high)
                    {
                            int mid = low + (high-low)/2;
                            
                            if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1])
                                    return nums[mid];
                            if((mid%2==0 && nums[mid]==nums[mid+1]) || (mid%2==1 && nums[mid]==nums[mid-1]))
                            {
                                    low = mid+1;
                            }
                            
                            else
                            {
                                    high = mid - 1;
                            }
                            
                            
                    }
            }
            
            return -1;
          
    }
};




//solution 2 : using xor it takes O(n)
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);    
        int ans=0;    
        for(int n:nums)
        {
               ans ^= n;
        }
            
        return ans;     
    }
};