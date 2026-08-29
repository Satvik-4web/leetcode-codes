class Solution {
public:
    double myPow(double x, int n) {
        long long power = n;
        double ans = 1;

        // Negative power
        if (power < 0) {
            x = 1 / x;
            power = -power;
        }

        while (power > 0) {

            // Odd power
            if (power % 2 == 1) {
                ans = ans * x;
            }

            // Square x
            x = x * x;

            // Half the power
            power = power / 2;
        }

        return ans;
    }
};