// 1207. Unique Number of Occurrences

// Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map<int,int> freq;
        for( int i = 0 ; i < arr.size() ; i++)
        {
            freq[arr[i]]++;
        }

        for( int i = 0 ; i<freq.size() ; i++)
        {
            for (int j = 1 ; j< freq.size() ; j++)
            {
                if( freq[i] == freq[j])
                return false;
            }
        }
        return true;

    }
};