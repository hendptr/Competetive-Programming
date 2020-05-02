#include <bits/stdc++.h>

int main(){
    int s, t, a, b, m, n, aI, aO=0, oI, oO = 0;
    std::cin >> s >> t >> a >> b >> m >> n;
    for(int i=0; i<m; i++){
        std::cin >> aI;
        if(aI + a >= s && aI + a <= t)aO++;
    }
    for(int i=0; i<n; i++){
        std::cin >> oI;
        if(oI + b >= s && oI + b <= t)oO++;
    }     
    std::cout << aO << std::endl << oO;
}
