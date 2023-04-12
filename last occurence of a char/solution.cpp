#include <iostream>
using namespace std;
void lastoccurence(string& s,char& x,int i,int& last)
{
  if(i>=s.size())
  return;
  if(s[i]==x)
  {
  last=i;
  }
  lastoccurence(s,x,i+1,last);
}
int main() {
string s="dbcefddd";
char x='d';
int last=-1;  // any value in string does't having any value on index-1
int i=0;
lastoccurence(s,x,i,last);
cout<<last<<endl;
  return 0;
}
