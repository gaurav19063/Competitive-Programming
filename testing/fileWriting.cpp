#include<iostream>
#include<fstream>
using namespace std;
int main(){
  ofstream fout;
  fout.open("loveletter.txt");
  while(fout)
  {
    string line;
    getline(cin,line);
    if(line=="-1")
    break;
    else;
    fout<<line<<endl;
  }
  fout.close();
}
