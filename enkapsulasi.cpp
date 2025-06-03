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

int main(){
    remoteLampu lampuRumah;
    lampuRumah.setSaklaNo(0, "Lampu Teras Rumah");
    lampuRumah.setSaklaNo(1, "Lampu Ruang Tamu");
    lampuRumah.setSaklaNo(2, "Lampu Ruang Tidur");
    lampuRumah.setSaklaNo(3, "Lampu Dapur");

    cout << lampuRumah.getSaklaNo(0) << endl;
    cout << lampuRumah.getSaklaNo(1) << endl;
    cout << lampuRumah.getSaklaNo(2) << endl;
    cout << lampuRumah.getSaklaNo(3) << endl;

    return 0;
}