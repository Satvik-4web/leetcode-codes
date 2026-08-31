class Solution {
public:
    int addDigits(int num) {

        while(num > 9) {

            int c = 0;

            while(num > 0) {
                int b = num % 10;
                c += b;
                num /= 10;
            }

            num = c;
        }

        return num;
    }
};