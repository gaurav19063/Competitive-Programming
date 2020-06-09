class Solution {
public:
    int reverse(int x) {
        if(x>=INT_MAX ||x<=INT_MIN)
            return 0;
        int flag=0;
        if(x<0)
        {flag++;
         x*=-1;
        }
        int a[1000];
        int j=0;
        for(int i=0;x>0;i++)
        {
            a[i]=x%10;
            x/=10;
            j++;
        }
   long int rev=a[0];
        int n=j-1;
        for( int i=1;i<j;i++)
        {

            // rev+=a[i]*pow(10,n--);
            rev=rev*10+a[i];
            // cout<<rev<<" ";

        }
        if(flag)
            rev*=-1;
        if( rev>=INT_MAX ||rev<=INT_MIN)
            return 0;
        return rev;

    }

};
