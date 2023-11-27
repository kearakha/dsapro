#include <iostream>
#include <cmath>

using namespace std;

int keliling_belah_ketupat (int s)
{
    int hasil_keliling = 4 * s;
    cout << hasil_keliling << endl;
    return hasil_keliling ;
}

int lp_kubus (int s)
{
    int hasil_lp = 6 * s^2;
    cout << 6 * pow(s, 2) << endl;
    return hasil_lp;

}

int volume_kubus (int s)
{
    int hasil_volume = s^3;
    cout << pow(s, 3) <<endl;
    return hasil_volume;
}

int main()
{
    int s;
    cout << "keliling belah ketupat" << endl;
    cout << "masukkan nilai s = ";
    cin >> s;

    keliling_belah_ketupat (s);

    cout << "Luas Permukaan Kubus " << endl;

    lp_kubus (s);

    cout << "Volume Kubus" << endl;

    volume_kubus (s);

    return 0;
}
