class Solution {
public:
    vector <string> tg(string version)
    {
        vector <string> tokens;
        stringstream ss(version);
        string token="";
        while(getline(ss,token,'.'))
        {
            tokens.push_back(token);
        }
        return tokens;
    }
    int compareVersion(string version1, string version2) {
        vector <string> tokens1=tg(version1);
        vector <string> tokens2=tg(version2);
        int n=tokens1.size();
        int m=tokens2.size();
        int i=0;
        while(i<m||i<n)
        {
            int a = i<n ? stoi(tokens1[i]) : 0;
            int b = i<m ? stoi(tokens2[i]) : 0;
            if(a<b)
                return -1;
            else if (b<a)
                return 1;
            else
                i++;
        }
        return 0;
    }
};