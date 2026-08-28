# include <iostream>
# include <string>
using namespace std;

int main()
{
    string name [20];
    string ids [20];

    for (int i = 0; i < 20; i++)
    {
        cout << "Nhap SV Thu " << i + 1 << endl;
        cout << "Ten Sinh Vien: ";
        getline (cin, name[i]);
        cout << "ID Sinh Vien: ";
        getline (cin, ids[i]);
    }
    
    cout << "--DANH SACH SINH VIEN--" << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << "Sinh Vien " << i + 1 << endl;
        cout << "Ten: " << name[i] << endl;
    }
    return 0;
}