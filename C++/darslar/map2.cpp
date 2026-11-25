#include <bits/stdc++.h>
#include<map>
using namespace std;

int main()
{
    map<string,string>  A={{"pen","ruchka"},{"apple","olma"},
    {"car","mashina"}};
    string a;
    cin>>a;
    for(auto p=A.begin();p!=A.end();p++)
    {
        if(p->first==a)
       { cout<<a<<" "<<p->second;
        break;
       }
    }

    return 0;
}