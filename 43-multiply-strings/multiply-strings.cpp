class Solution {
public:
    string multiply(string num1, string num2) {
        int n = num1.size();
        int m = num2.size();

        if (num1 == "0" || num2 == "0")
            return "0";

        string ans(n + m, '0');

        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {

                int a = num1[i] - '0';
                int b = num2[j] - '0';

                int product = a * b + (ans[i + j + 1] - '0');

                ans[i + j + 1] = (product % 10) + '0';

                ans[i + j] += product / 10;
            }
        }

        int start = 0;

        while (start < ans.size() && ans[start] == '0')
            start++;

        return ans.substr(start);
    }
};