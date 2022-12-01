#include <iostream>

using namespace std;



int main(){

    int n=0;
    int m=0;
    int producto=0;

    cin>>n;
    cin>>m;

    for(int i=0;i<m;i++){
        producto=producto+n;
    }
    cout<<producto<<endl;

    return 0;
}
