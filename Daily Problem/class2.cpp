#include<memory>
#include<iostream>
using namespace std;

void function(){
    unique_ptr <int> ptr (new int(55));
    cout<<*ptr;
}
int main(){
    function();
}