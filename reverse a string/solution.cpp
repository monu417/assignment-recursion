#include <iostream>
using namespace std;
void lastoccurence(string& s,int i,int j)
{
  if(i>=j)
  return;
 swap(s[i],s[j]);
  lastoccurence(s,i+1,j-1);
}
int main() {
string s="dbcef";
int i=0,j=s.size()-1;
lastoccurence(s,i,j);
cout<<s<<endl;
  return 0;
}
