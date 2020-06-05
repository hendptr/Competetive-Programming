class Solution {
public:
    void reverseString(vector<char>& s) {
        int len = s.size()-1;
        for(int i=0;i<(len+1)/2;i++){
            char temp = s[i];
            s[i] = s[len-i];
            s[len-i] = temp;
        }
    }
};
