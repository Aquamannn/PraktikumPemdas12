#include <iostream>
using namespace std;

class remoteLampu {
    private:
    string saklarNo[10];
    public:
    void setSaklaNo(int i, string value ) {
        saklarNo[i] = value;
    }
    string getSaklaNo(int i) {
        return saklarNo[i];
    }
};