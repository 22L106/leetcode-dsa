class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=0,n=s.size()-1;
        i=n;
        while(i>=0 && s[i]==' ') i--;
        int c=0;
        while(i>=0 && s[i]!=' ') {
            c++;
            i--;
        }
        return c;
    }
};
