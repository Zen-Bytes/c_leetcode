/*
Given a string s, return the longest palindromic substring in s.
*/

char * longestPalindrome(char * s){
    int len = strlen(s);
    int maxLength = 1; 
    char* start = s; 
    char* end = s; 
    char* center = s; 
    
    for (int i = 0; i < len; i++) {
        // checking for even palindromes
        start = s + i;
        end = s + i + 1;
        while (start >= s && end < s + len && *start == *end) {
            start--;
            end++;
        }
        if (end - start - 1 > maxLength) {
            maxLength = end - start - 1;
            center = start + 1;
        }
        
        // checking for odd palindromes
        start = s + i - 1;
        end = s + i + 1;
        while (start >= s && end < s + len && *start == *end) {
            start--;
            end++;
        }
        if (end - start - 1 > maxLength) {
            maxLength = end - start - 1;
            center = start + 1;
        }
    }
    *(center + maxLength) = '\0'; 
    return center;
}
