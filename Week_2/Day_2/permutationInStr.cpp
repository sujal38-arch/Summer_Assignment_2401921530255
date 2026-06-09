bool checkInclusion(string s1, string s2){
    int freq[26] = {0};
    for(char c : s1){
        freq[c - 'a']++;
    }
    int i = 0, j = 0, totalChar = s1.size();
    while(j < s2.size()){
        if(freq[s2.at(j++) - 'a']-- > 0){
            totalChar--;
        }
        if(totalChar == 0){
            return true;
        }
        if(j - i == s1.size() && freq[s2.at(i++) - 'a']++ >= 0){
            totalChar++;
        }   
    }
    return false;
}