
// The main function that sort the given string arr[] in
// alphabatical order
// return the sorted char array
char* countSort(char *arr)
{

// Your code goes here
int ar[26]={0};
for(int i=0;arr[i]!='\0';i++)
{
    ar[arr[i]-'a']++;
}

// ar[2]=3;
int k=0;
for(int i=0;i<26;i++)
{
    if(ar[i]>0)
    {
        while(ar[i]--)
        {
            arr[k++]='a'+i;

        }
    }
}
return arr;
}
