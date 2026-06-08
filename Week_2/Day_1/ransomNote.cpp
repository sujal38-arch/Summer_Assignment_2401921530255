bool canConstruct(string ransomNote, string magazine){
    vector<int> h(26);
    for(int i = 0; i < magazine.size(); i++){
        h[magazine[i] - 'a']++;
    }
    for(int i = 0; i < ransomNote.size(); i++){
        int x = --h[ransomNote[i] - 'a'];
        if(x < 0) return false;
    }
    return true;
}