
class Solution {
public:
    // string reorganizeString(string S) {




class comp{
	public:
	bool operator()(pair<char,int>p1,pair<char,int>p2)
	{
		return p1.second<p2.second;
	}
};

 string reorganizeString(string s)
{

	int a[26]={0};
	priority_queue<pair<char,int>,vector<pair<char,int>>,comp> pq;
	for(int i=0;i<s.length();i++)
	{
		a[s[i]-'a']++;
	}
	for(int i=0;i<26;i++)
	{
		if(a[i]>0)
		pq.push(make_pair('a'+i,a[i]));
	}
	string op="";
	while(pq.size()>1)
	{
	 pair<char,int> p1=pq.top();
	pq.pop();
	pair<char,int>p2=pq.top();
	pq.pop();
	int t=p1.second;
	for(int j=0;j<min(p1.second,p2.second);j++)
	{
		op=op+p1.first+p2.first;
		t--;
	}
	if(t>0)
	{
		pq.push(make_pair(p1.first,t));
	}
	}
	if(pq.size()==0)

	return op;
	else if(pq.size()>=1&&pq.top().second==1)
	{
	pair<char,int>p=pq.top();
	op+=p.first;
	return op;
	}
	else
	{
		return "";
	}
}
};
