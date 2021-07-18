#include<iostream>
#include<map> // for normal map
#include<unordered_map>
using namespace std;
int main(){
map<string,int> m;
m["Mango"]=100;
m["Guava"]=200;
m["apple"]=300;
m["grapes"]=400;
cout<<m["Mango"]<<endl;
if(m.find("chach")!=m.end()){
    cout<<m["Mango"]<<endl;
}
// travesal
//m.begin();->gives you node with minimum key
for(map<string,int>::iterator it=m.begin();it!=m.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
}
}