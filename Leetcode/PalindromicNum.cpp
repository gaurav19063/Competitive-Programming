class Solution {
public:
    bool isPalindrom(int *a,int i)
    {
        for(int j=0;j<i;j++,i--)
        {
            if(a[i-1]!=a[j])
                return false;
        }
        return true;
    }

    bool isPalindrome(int x) {
        if(x<0)
            return false;

            int a[20];
        int i=0;
            for(;x>0;i++)
            {
                a[i]=x%10;
                x/=10;
            }
        return isPalindrom(a,i);


    }
};
