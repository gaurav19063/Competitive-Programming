long binarySubstring(int n, string a){

    // Your code here
    long int count=0;
    for(auto x:a)
    {
        if(x=='1')
        count++;
    }
    return count*(count-1)/2;

}
