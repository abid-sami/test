#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	cin>>x;
    if(x<3){
        cout<<"Gold";
    }
    else if(x>=3 && x<6){
        cout<<"Silver";
    }
    else if(x>6){
        cout<<"Bronze";
    }
    
}
