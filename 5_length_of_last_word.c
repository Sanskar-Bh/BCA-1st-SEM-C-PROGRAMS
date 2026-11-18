int lengthOfLastWord(char* s) {
    int count = 0;
    int i = strlen(s) - 1;
    
    // Skip spaces at the end
    while (i >= 0 && s[i] == ' ') {
        i--;
    }
    
    // Count letters of the last word
    while (i >= 0 && s[i] != ' ') {
        count++;
        i--;
    }
    
    return count;
}
