/* 
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

*/

char * longestCommonPrefix(char ** strs, int strsSize){
    char* result = "";
    if (strsSize == 0) {
        return result;
    }
    int prefixlen = strlen(strs[0]);
    for (int i = 1; i < strsSize; i++) {
        int j = 0;
        while (j < prefixlen && strs[0][j] == strs[i][j]) {
            j++;
        }
        prefixlen = j;
        if (prefixlen == 0) {
            return result;
        }
    }
    result = (char*)malloc(sizeof(char) * (prefixlen + 1));
    strncpy(result, strs[0], prefixlen);
    result[prefixlen] = '\0';
    return result;
}
