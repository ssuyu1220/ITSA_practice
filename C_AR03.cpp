#include<iostream>
using namespace std;
#include<cmath>
typedef long long ll;
int main(){
    ll sum=0;
    for(int i=0;i<6;i++){
        ll num=0;
        //scanf("%lld",num);
        scanf("%lld",&num);
        sum+=pow(num,3);
    }
    printf("%lld\n",sum);
    return 0;
}
