#include<iostream>
using  namespace std;

class Node{
public:
int data;
Node* next;

Node(int d)
{
data=d;
next=NULL;
}
};

Node* makeLinkList()
{

int n;
cin>>n;
Node* head1=NULL;
Node* temp=NULL;
while(n--)
{
int data;
cin>>data;
if(head1==NULL)
{
head1=new Node(data);
temp=head1;
}
else
{
head1->next=new Node(data);
head1=head1->next;
}
}
return temp;
}
Node* merge(Node* head1,Node* head2)
{
Node* mergedLL=new Node(0);
Node* temp=mergedLL;
while(head1&&head2)
{
if(head1->data<head2->data)
{
temp->next=head1;
head1=head1->next;

}
else{
temp->next=head2;
head2=head2->next;
}
temp=temp->next;
temp->next=NULL;
}
if(head1)
temp->next=head1;
if(head2)
temp->next=head2;
return mergedLL->next;

}
int main()
{
int t;
cin>>t;
while(t--)
{
Node* linkList1=makeLinkList();
Node* linkList2=makeLinkList();
Node* mergedLL=merge(linkList1,linkList2);
while(mergedLL)
{
cout<<mergedLL->data<<" ";
mergedLL=mergedLL->next;

}
cout<<endl;
}
}
