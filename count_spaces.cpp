#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
    string str;
    std::string::iterator i;
     getline(cin,str);
  
    for(i=str.begin();i!=str.end();i++)
    {
        if(*i==' ')
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}