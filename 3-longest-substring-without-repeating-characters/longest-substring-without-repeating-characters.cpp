class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int n = s.size();
        int left = 0;
        int maxi = 0;

        for(int right = 0; right < n; right++) {

            for(int j = left; j < right; j++) {

                if(s[j] == s[right]) {
                    left = j + 1;
                    break;
                }
            }

            maxi = max(maxi, right - left + 1);
        }

        return maxi;
    }
};