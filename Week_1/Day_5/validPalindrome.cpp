bool isPalindrome(string s){
    int i = 0;
    int j = s.length() - 1;
    while(i <= j){
        if(isalnum(s[i]) == 0){
            i++;
            continue;
        }
        if(isalnum(s[j]) == 0){
            j--;
            continue;
        }
        if(tolower(s[i]) != tolower(s[j])){
            return false;
        } else{
            i++;
            j--;
        }
    }
    return true;
}