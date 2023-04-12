class Solution {
public:
void adds(string& num1,string& num2,int i,int j,int &carry,string& s)
{
    if(i<0 && j<0)
    {
        if(carry!=0)
        {
        //    string s1=to_string(carry);
           s=s+to_string(carry);
           return;
        }
     return; 
    }
   int a,b;
//    string s="";
   if(i>=0)
   {
      a=num1[i]-'0';
   }
   else
   {
       a=0;
   }
   if(j>=0)
   {
       b=num2[j]-'0';
   }
   else
   {
       b=0;
   }
   int num=a+b+carry;
   carry=num/10;
   int last=num%10;
   s=s+to_string(last);
   adds(num1,num2,i-1,j-1,carry,s);
   return;
}
    string addStrings(string num1, string num2) {
         int i=num1.size()-1;
         int j=num2.size()-1;
         int carry=0;
         string s= "";
        adds(num1,num2,i,j,carry,s);
        reverse(s.begin(),s.end());
        return s;
    }
};
