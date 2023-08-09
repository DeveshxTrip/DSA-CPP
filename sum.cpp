#include <iostream>
using namespace std;
int main(){
    cout<<"hello world"<<endl;
    int a=10;
    int b=20;
    cout<<"before swapping"<<endl<<a<<" "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swapping"<<endl<<a<<" "<<b;


    return 0;
}