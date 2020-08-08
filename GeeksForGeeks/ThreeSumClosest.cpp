
// User function template for C++

// arr : given vector of elements
// target : given sum value

int threeSumClosest(vector<int> arr, int target) {
    // Your code goes here
    int n=arr.size();
    sort(arr.begin(),arr.end());
    int flag=1;int maxsum;
    int diff;
  for(int i=0;i<n;i++)
  {
      int j=i+1;
      int k=n-1;
      while(j<k)
      {
          int sum=arr[i]+arr[j]+arr[k];
          int d=abs(target-sum);
          if(flag)
          {
              maxsum=sum;
              diff=d;
              flag=0;
              continue;
          }


        if(d<diff)
          {
              maxsum=sum;

            diff=d;
          }
          else if(d==diff)
          {
              maxsum=max(maxsum,sum);
          }

          if(sum<target)
          j++;
          else
          k--;


      }
  }
  return maxsum;


}
