class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        reverse(nums.begin(), nums.begin()+(nums.size()-k));
        reverse(nums.begin()+(nums.size()-k), nums.end());
        reverse(nums.begin(),nums.end());
    }
};
/*k = k % nums.size();
This line ensures that the number of rotations k is within the bounds of the array size.
If k is larger than the size of the array, say nums.size() = 5 and k = 7, rotating the array 7 times is the same as rotating it 2 times (7 % 5 = 2), so we use the modulo operation (%) to find the effective number of rotations needed.

reverse(nums.begin(), nums.begin() + (nums.size() - k));
This line reverses the first part of the array, from the start (nums.begin()) to the point where the array should be split (nums.size() - k).
Let's say nums = [1, 2, 3, 4, 5] and k = 2. Here, nums.size() = 5, so nums.size() - k = 3. This means it will reverse the first 3 elements: [1, 2, 3] will become [3, 2, 1].
The array becomes [3, 2, 1, 4, 5].

reverse(nums.begin() + (nums.size() - k), nums.end());
This line reverses the second part of the array, from the point after the first part (nums.begin() + (nums.size() - k)) to the end (nums.end()).
Continuing from the previous example, this will reverse [4, 5] to become [5, 4].
The array becomes [3, 2, 1, 5, 4].
reverse(nums.begin(), nums.end());

This final line reverses the entire array.
For our example, reversing [3, 2, 1, 5, 4] gives [4, 5, 1, 2, 3], which is the desired result.
Why Does This Work?
The key idea is to break the array into two parts:

The part that will be "moved" to the end of the array.
The part that will remain in the beginning.
By reversing both parts separately and then reversing the entire array, we achieve the desired rotation.*/