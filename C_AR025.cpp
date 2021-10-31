#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
	string c;
	map<int,int> m;
    cin>>c;
    for(string::iterator in=c.begin();*in!='\0';in++){
        int asc=static_cast<int>(*in);
        if(m.count(asc)!=0){
            m.at(asc)+=1;
        }
        else{
            m.insert(pair<int,int>(asc,1));
        }
    }

	int len=m.size();
	map<int,int>::iterator tmp=m.end();
	tmp--;
	for(map<int,int>::iterator it=tmp; it!=m.begin(); it--){
        printf("%d %d\n",it->first,it->second);
	}
    map<int,int>::iterator k=m.begin();
	printf("%d %d\n",k->first,k->second);
	return 0;
}
