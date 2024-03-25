#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;

    for(int x = 0 ; x <= n ; x++){
        for(int y = 0 ; y <= n ; y++){
            long long X = pow(x,2);
            long long Y = pow(y,2);
            if(static_cast<int>(X + Y) % n == 0){
                cout << x << " " << y << endl;
                return 0;
            } else {
                continue;
            }
        }
    }
    cout << "No solutions";
    return 0;
}