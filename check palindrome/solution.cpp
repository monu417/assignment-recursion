#include <iostream>
using namespace std;
bool chcek(string& s,int i,int j)
{
  if(i>=j)
  {
    // cout<<"true"<<endl;
    return true;
  }
  if(s[i]!=s[j])
  {
  // cout<<"false"<<endl;
  return false ;
  }
  chcek(s,i+1,j-1);
}
int main() {
  string s="nitin";
  int i=0,j=s.size()-1;
  bool ans=chcek(s,i,j);
  cout<<ans<<endl;
  return 0;
}
