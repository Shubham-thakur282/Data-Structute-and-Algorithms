#include<iostream>
using namespace std;

void reachHome(int src, int des){
    // base case
    cout << "Source " << src <<endl ;
    if(src == des){
        cout << "Reached Home!";
        return ;
    }
    // recursive relation
    reachHome(src+1,des);

}

int main(){

    int des = 10;
    int src = 1;

    reachHome(src,des);

    return 0;
}