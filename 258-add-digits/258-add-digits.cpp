class Solution {
public:
    int sumOfDigit(int n)
    {
        int sum = 0;
        while(n)
        {
            int digit = n%10;
            sum += digit;
            n /= 10;
        }
        return sum;
    }
    int addDigits(int num) {
        while(num)
        {
            num = sumOfDigit(num);
            if(num < 10)
                return num;
        }
        return 0;
    }
};