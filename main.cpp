#include <iostream>
using namespace std;

#include "ToyFactory.cpp"

int main(){
    // cout<<"Manjur\n";
    int type;
    while(1){
        cout<<"Enter 0 to exit\n";
        cin>>type;
        if(type == 0) break;
        Toy *obj = ToyFactory::createToy(type);
        if(obj){
            obj->showProduct();
            delete obj;
        }
    }
    cout<<"Exitting..\n";
    return 0;
}