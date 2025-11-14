#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a = 12 , b = 25;

    cout<<"AND Operation (&) of "<< a << " "<<b <<" = "<<(a&b)<<endl;
    cout<<"OR Operation (|) of "<< a << " "<<b <<" = "<<(a|b)<<endl;
    cout<<"XOR Operation (^) of "<< a << " "<<b <<" = "<<(a^b)<<endl;
    cout<<"1's Complement of " << a << " = "<< (~a)<<endl; //Not same as Note because here use 32 bits
    cout<<"2's Complement of " << a << " = "<< (~a)+1<<endl;

    //shifting Right >> , left << 
    // right shift means Decreasing by 2^N.---ex: 212 >>1 =212 / 2^1= 106, 212 >> 2 = 212 / 2^2 = 53 
    //left shift means increasing by 2^N. --- ex : 212 << 2 = 212 * 2^2 = 848

    int num = 212 ;
    cout<<"Right Shifting(>>)\n";
    for(int i = 0 ; i<4;i++){ // shifting by 3 bit 

    	cout<<"212 >> "<<i<<" = "<<(212>>i)<<endl;
    }
    cout<<"Left Shifting(<<)\n";
    for(int i = 0 ; i<4;i++){ // shifting by 3 bit 

    	cout<<"212 << "<<i<<" = "<<(212<<i)<<endl;
    }

    return 0;
}