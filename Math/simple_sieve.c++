#include<iostream>
#include<vector>
using namespace std;

int simpleSieve(int n){
    vector<bool> prime(n+1,true);
        prime[0] = prime[1] = false;
        int ans = 0;
        for(int i=2;i<n;i++){
            if(prime[i]){
                ans++;
                for(int j=2*i;j<n;j=j+i){
                    prime[j] = false;
                }
            }
        }
        return ans;
}

int main(){
    int n =10;
    cout << simpleSieve(n);

    return 0;
}