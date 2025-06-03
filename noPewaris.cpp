#include <iostream>
using namespace std;

class baseClass final {
    public:
    virtual void perkenalan(){
        cout << "Halo, saya Function dari base class";
    }
};

class baseClass1 {
    public:
    virtual void perkenalan(){
        cout << "Halo, saya Function dari base class";
    }
};

class drivedClass : public baseClass1{
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