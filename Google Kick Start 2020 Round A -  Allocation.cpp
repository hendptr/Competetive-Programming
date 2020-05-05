#include <bits/stdc++.h>
using namespace std;

int n, b, a[100000];
int main(){
    ios::sync_with_stdio(0);
	cin.tie(0);
    int t;
    cin >> t;
    int i=1;
    while (t--){
        cin >> n >> b;
        for(int i=0;i<n;i++)cin >> a[i];
        sort(a, a+n);
        int answer=0;
        for(int i=0;i<n;i++){
            if(b>=a[i]){
                b-=a[i];
                answer++;
            }
        }
    cout << "Case #" << i << ": " << answer << "\n";
    i++;
    }
}
