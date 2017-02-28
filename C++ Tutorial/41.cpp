/*Maps or maps are associative containers that stores element formatted by combination of key values and mapped value. Because maps are associative
we cannot provide duplicate key to two values .*/
#include <iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
    map<int,string> name_map;//(key data type, value data type)
    name_map[1]="Abhishek";
    name_map [2]="Anand";
    name_map[3]="Dude";
    name_map.insert(pair<int,string>(4,"Doodler"));
    map<int,string>::iterator iter=name_map.find(3); ///iterator
    name_map.erase(iter);///to erase after finding the value
    cout<<"Key Found "<<iter->second<<endl;
    cout<<name_map[2]<<endl;
    ///name_map.clear();
    cout<<name_map.size()<<endl;
    for(map<int,string>::iterator it= name_map.begin();it!=name_map.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}
