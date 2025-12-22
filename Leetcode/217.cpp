// 217. Contains Duplicate

// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> freq;

        for(int num : nums)
        {
            if(freq.count(num))
            return true;

            else
            freq.insert(num);
        }   
        return false;
    }
};