class Solution{
public:
    bool isLucky(int n) {
        for(int i=2;i<=n;i++)
        {
            if(n%i==0)
            {
                return 0;  
            }
            
            n=n-(n/i);
        }
        return 1;
        // code here
    }
};
