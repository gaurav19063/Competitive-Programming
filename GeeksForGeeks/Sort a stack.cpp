
/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s
you are required to complete the below method */

void SortedStack :: sort()
{
   //Your code here
   vector<int> v;
   while(!s.empty())
   {
     v.push_back(s.top());
    s.pop();
   }

 std:: sort(v.begin(),v.end());
   for(auto x:v)
   s.push(x);

}
