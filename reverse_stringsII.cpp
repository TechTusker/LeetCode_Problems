class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size();
        
        // Iterate over the string in steps of 2k
        for (int i = 0; i < n; i += 2 * k) {
            // Determine the range to reverse: [i, i + k - 1] or until the end of the string
            int left = i;
            int right = min(i + k - 1, n - 1);
            
            // Reverse the first k characters (or less if fewer than k characters remain)
            while (left < right) {
                swap(s[left++], s[right--]);
            }
        }
        
        return s;
    }
};
