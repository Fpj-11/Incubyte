#include<bits/stdc++.h>

using namespace std;

int add(string s)
{
    int cnt = 0;
   
   int n = s.length();
   vector<int> v;
   int flag = 0;
   vector<string> v1;
   int arr[n];
   for(int i = 0;i<n;i++)
   {
       if(isdigit(s[i]) == true || s[i] == '-')
       {
           if(s[i] == '-')
           {
               flag = 1;
               break;
           }
           else
           {
           int p = (int)(s[i]);
           arr[cnt] = p - 48;
           cnt++;
           }
       }
    }
    
    int sum = 0;
    for(int i = 0;i<cnt && sum <= 1000;i++)
    {
        sum = sum + arr[i];
    }
    
    
    if(flag != 1)
    return sum;
    else
    return -1;
}


int main()
{
    
     string s;
     getline(cin,s);
     int p = add(s);
     if(p>=0)
     cout << p <<endl;
     else
     cout <<"negetives not allowed"<< endl;
}
