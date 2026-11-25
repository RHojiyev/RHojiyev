#include <bits/stdc++.h>
#include<map>
using namespace std;

int main()
{   srand (time(NULL));
    map<string,string>A={{"pen","ruchka"},
                         {"apple","olma"},
                         {"car","mashina"}
                        };
    int r=rand()%4;
    int g=0;
    for(auto p=A.begin();p!=A.end();p++)
    {  
        g++;
        if(g==r)
        cout<<p->first<<" "<<p->second;
        
    }

    return 0;
}