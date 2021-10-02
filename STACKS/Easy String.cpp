
string transform(string S){

 transform(S.begin(), S.end(), S.begin(), ::tolower);
    int c = 1;
    string ans;
    for(int i = 1; i < S.length(); i++){
        if(S[i] == S[i - 1]) {
            c++;
            continue;
        }
        else{
            ans += to_string(c);
            ans += S[i - 1];
            c = 1;
        }
    }
    ans += to_string(c);
    ans += S[S.length() - 1];
    return ans;

 
}
