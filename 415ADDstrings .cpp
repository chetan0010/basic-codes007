class Solution {
public:
    string addStrings(string num1, string num2) {
        string r;
        int i=num1.size()-1;
        int j=num2.size()-1;int c=0;
        while(i>=0 || j>=0)
        {
            int s=c;
            if(i>=0)
            {s+=num1[i]-'0';i--;}
            if(j>=0)
            {
                s+=num2[j]-'0';
                j--;
            }
            r.append(to_string(s%10));
            c=s/10;
        }
        if(c!=0)
        {
            r.append(to_string(c));
        }
        reverse(r.begin(),r.end());
        return r;


    }
};
