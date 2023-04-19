/*
Given an integer n, return the number of trailing zeroes in n!.

Note that n! = n * (n - 1) * (n - 2) * ... * 3 * 2 * 1

*/

int trailingZeroes(int n){
    int c = 0;
    while (n >= 5) {
        //eliminating the factors of 5
        n /= 5;
        //adding the quotient to c
        c += n;
    }
    return c;
}
