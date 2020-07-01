#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  ifstream fin;
  fin.open("sample.txt");
  while(fin)
  {
    string line;
    getline(fin,line);
    cout<<line<<endl;

  }
  fin.close();

}
