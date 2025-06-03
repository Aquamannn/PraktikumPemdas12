#include <iostream>
using namespace std;

class seserorang {
public:
    virtual void pesan() = 0;
    // virtual void pesan(){
    //      cout<<"Pesan Dari Seseorang" << endl;
    //}
};

class joko :public seserorang {
    public:
    void pesan(){
        cout << "Pesan Dari Joko" << endl;
    }
};

class lia : public seserorang {
    public:
    void pesan(){
        cout << "Pesan Dari Lia" << endl;
    }
};

int main(){
    seserorang* obyek;
    joko a;
    lia b;

    obyek = &a;
    obyek-> pesan();
    obyek = &b;
    obyek-> pesan();
    //a.seseorang::pesan();
    //b.seseorang::pesan();
    return 0;
}