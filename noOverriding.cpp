#include <iostream>
using namespace std;

class baseClass {
    public:
    virtual void perkenalan(){
        cout << "Halo, saya Function dari base class";
    }
};

class drivedClass : public baseClass {
    public:
    void perkenalan(){
        cout << "Halo, saya Function dari drived class";
    }

};

int main(){
    drivedClass a;
    a.perkenalan();

    return 0;
}