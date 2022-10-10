#include "bits/stdc++.h"
using namespace std;
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;
        unsigned rx = 0;
        unsigned store = x;
        while (x)
        {
            rx = rx * 10 + x % 10;
            x /= 10;
        }
        return store == rx;
    }
};
class Solution{  
 public static bollean isPalindrome(String args[],int x){  
  int r,sum=0,temp;    
  
  
  temp=x;    
  while(x>0){    
   r=x%10;  
   sum=(sum*10)+r;    
   x=x/10;    
  }    
  if(temp==sum)    
   return true;    
  else    
   return false;    
}  
}  
