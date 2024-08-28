class Solution {
public:
    int maxVowels(string s, int k) {
        int maxi = 0;
    int count = 0;

    // First, count vowels in the first substring of length k
    for (int i = 0; i < k && i < s.size(); i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            count++;
        }
    }

    maxi = count;

    // Now slide the window across the string
    for (int i = k; i < s.size(); i++) {
        // Remove the influence of the first character of the previous window
        if (s[i - k] == 'a' || s[i - k] == 'e' || s[i - k] == 'i' || s[i - k] == 'o' || s[i - k] == 'u') {
            count--;
        }
        // Add the influence of the new character in the current window
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            count++;
        }
        // Update the maximum
        maxi = std::max(maxi, count);
    }

    return maxi;
    }
};