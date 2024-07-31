class Solution {
public:
    bool canBeConstructedByRepeating(const std::string &s, const std::string &part) {
    int len_s = s.length();
    int len_part = part.length();
    if (len_s % len_part != 0) {
        return false;
    }
    for (int i = 0; i < len_s; i += len_part) {
        if (s.substr(i, len_part) != part) {
            return false;
        }
    }
    return true;
}
    string gcdOfStrings(string str1, string str2) {

     int len1 = str1.length();
    int len2 = str2.length();
    int gcd_len = std::gcd(len1, len2); // C++17 provides std::gcd

    std::string candidate = str1.substr(0, gcd_len);

    if (canBeConstructedByRepeating(str1, candidate) && canBeConstructedByRepeating(str2, candidate)) {
        return candidate;
    }

    return "";   
    }
};