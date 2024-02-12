#include <iostream>
using namespace std;

class Toy{
public:
    virtual void prepareParts() = 0;
    virtual void combineParts() = 0;
    virtual void assembleParts() = 0;
    virtual void applyLabel() = 0;
    void showProduct(){
        this->prepareParts();
        this->combineParts();
        this->assembleParts();
        this->applyLabel();
    }
};

class Car : public Toy{
public:
    void combineParts() { cout<<"Combine the parts for Car\n" ;}
    void prepareParts() { cout<<"Prepare the parts for Car\n" ;}
    void assembleParts() { cout<<"Assemble the parts for Car\n" ;}
    void applyLabel() { cout<<"Apply labels for Car\n" ;}
};
class Bike : public Toy{
public:
    void combineParts() { cout<<"Combine the parts for Bike\n" ;}
    void prepareParts() { cout<<"Prepare the parts for Bike\n" ;}
    void assembleParts() { cout<<"Assemble the parts for Bike\n" ;}
    void applyLabel() { cout<<"Apply labels for Bike\n" ;}
};
class Plane : public Toy{
public:
    void combineParts() { cout<<"Combine the parts for Plane\n" ;}
    void prepareParts() { cout<<"Prepare the parts for Plane\n" ;}
    void assembleParts() { cout<<"Assemble the parts for Plane\n" ;}
    void applyLabel() { cout<<"Apply labels for Plane\n" ;}
};
