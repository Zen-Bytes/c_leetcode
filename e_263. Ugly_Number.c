/*
An ugly number is a positive integer whose prime factors are limited to 2, 3, and 5.

Given an integer n, return true if n is an ugly number.

*/

bool isUgly(int n){
    if (n <= 0) {
        return false; 
    }
    while (n % 2 == 0) {
        n /= 2; // Divide by 2 until not  by 2
    }
    while (n % 3 == 0) {
        n /= 3; // similarly with 3
    }
    while (n % 5 == 0) {
        n /= 5; // similarly with 5
    }
    if(n==1){
        return true;
    }
    else{
        return false; 
    }
}
