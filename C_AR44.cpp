#include<iostream>
#include<string>
using namespace std;
int main(){
    string in="";
    bool dec=true;
    cin>>in;
    string::iterator r=in.end();
    string::iterator l=in.begin();
    r--;
    int len=in.size()/2;

    for(int i=0;i<len;i++){
        if(*r!=*l){
            dec=false;
            break;
        }
        r--;
        l++;
    }
    if(dec==false) printf("NO\n");
    if(dec==true) printf("YES\n");
    return 0;
}
