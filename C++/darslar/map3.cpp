#include <bits/stdc++.h>
#include<map>
using namespace std;

int main()
{
    map<string,string>A={{"pen","ruchka"},
                         {"apple","olma"},
                         {"car","mashina"}
                        };
    string a;
 for(;;)
 {
     cin>>a;
 
    for(auto p=A.begin();p!=A.end();p++)
    {  
        
        if(p->second==a)
        cout<<p->first<<"\n";
        if(p->first==a)
        cout<<p->second<<"\n";
        
    }
}
    return 0;
}