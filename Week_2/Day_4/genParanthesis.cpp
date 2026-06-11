void helper(vector<string>& v, int n, int o_cnt, int c_cnt, string s){
        if(o_cnt == n && c_cnt == n){
            v.push_back(s);
            return;
        }
        if(o_cnt < n){
            helper(v, n, o_cnt+1, c_cnt, s+"(");
        }
        if(c_cnt < o_cnt){
            helper(v, n, o_cnt, c_cnt+1, s+")");
        }
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        int o_cnt = 0, c_cnt = 0;
        helper(v, n, o_cnt, c_cnt, "");
        return v;
    }