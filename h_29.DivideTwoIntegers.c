/*
Given two integers dividend and divisor, divide two integers without using multiplication, division, and mod operator.

The integer division should truncate toward zero, which means losing its fractional part. For example, 8.345 would be truncated to 8, and -2.7335 would be truncated to -2.

Return the quotient after dividing dividend by divisor.

Note: Assume we are dealing with an environment that could only store integers within the 32-bit signed integer range: [−2^31, 2^31 − 1]. For this problem, if the quotient is strictly greater than 2^31 - 1, then return 2^31 - 1, and if the quotient is strictly less than -2^31, then return -2^31.

*/

nt divide(int dividend, int divisor){
        if (dividend == INT_MIN && divisor == -1) {
        return INT_MAX;
    }

    // Calculate absolute values of dividend and divisor
    int sign = (dividend < 0) ^ (divisor < 0) ? -1 : 1;
    long long absDividend = llabs((long long)dividend);
    long long absDivisor = llabs((long long)divisor);

    // Edge case: dividend is smaller than divisor
    if (absDividend < absDivisor) {
        return 0;
    }

    // Perform long division
    long long quotient = 0;
    long long temp = 0;
    for (int i = 31; i >= 0; i--) {
        if ((temp + (absDivisor << i)) <= absDividend) {
            temp += absDivisor << i;
            quotient |= 1LL << i;
        }
    }

    return sign * (double)quotient;
}
