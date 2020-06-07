// Bit Manipulation
#include <iostream>
using namespace std;
int isOdd(int n)
{
    return n&1;
}
int get_ith_bit(int n,int i)
{
    return n&(1<<i)?1:0;
}
int set_ith_bit(int n,int i)
{
    return n|(1<<i);
}
int clear_ith_bit(int n,int i)
{
    return n&~(1<<i);
}
int update_ith_bit(int n,int i,int b)
{
    return b?(n|(1<<i)):(n&~(1<<i));
}
int clear_bit_in_range(int n,int i,int j)
{
    // int mask1=((~0)<<j+1);
    // int mask2=(1<<i)-1;
    // cout<<mask1<<" "<<mask2<<endl;
    return n&(((~0)<<j+1)|(1<<i)-1);
}
int main() {
    // cout<<"Hello World!";
    cout<<isOdd(5)<<endl;
    cout<<get_ith_bit(5,2)<<endl;
    cout<<set_ith_bit(11,2)<<endl;
    cout<<clear_ith_bit(15,2)<<endl;
    cout<<update_ith_bit(11,2,1)<<endl;
    cout<<clear_bit_in_range(15,1,2);
    // cout


}
