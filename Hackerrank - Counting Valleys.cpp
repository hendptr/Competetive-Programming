#include <bits/stdc++.h>

using namespace std;

int main(){

    long long n;
    int sea_level=0,sum=0;
    cin >> n;
    char s[n];
    for(int i=0;i<n;i++)cin >> s[i];

    for(int i=0;i<n;i++){
        if(s[i] == 'U'){
            sea_level++;
        }else{
            sea_level--;
        }
        if(sea_level == 0 && s[i] == 'U'){
                sum++;
            }
    }
    cout << sum;
}
