#include <iostream>
using namespace std;

int main() {
    string str;
    cout<<"Enter string: ";
    cin>>str;
    int s= str.size()-1;
    for(int i=0;i<(str.size()-1)/2;i++) {
        swap(str[i],str[s]);
        s--;


    }
    cout<<str;
    return 0;
}
