#include <iostream>
using namespace std;

class baseClass {
    public:
    virtual void perkenalan() final {
        cout << "Halo, saya Function dari base class";
    }
};

class drivedClass : public baseClass {
    public:
    void perkenalan1(){
        cout << "Halo, saya Function dari drived class";
    }

};

int main(){
    drivedClass a;
    a.perkenalan1();

    return 0;
}