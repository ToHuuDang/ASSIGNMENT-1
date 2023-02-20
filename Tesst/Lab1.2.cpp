#include <iostream>
#include <cmath>

using namespace std;

void ptb2(double a, double b, double c) {
    double delta = b*b - 4*a*c;
    double x1, x2;
    int numRoots;
    
    if (delta > 0) {
        numRoots = 2;
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        cout << "Phuong trinh co 2 nghiem: " << x1 << " va " << x2 << endl;
    } else if (delta == 0) {
        numRoots = 1;
        x1 = -b / (2*a);
        cout << "Phuong trinh co 1 nghiem " << x1 << endl;
    } else {
        numRoots = 0;
        cout << "Phuong trinh vo nghiem" << endl;
    }
    
}

int main()
{
    double a, b, c;
    cout << "Nhap so a: ";
    cin >> a;

    cout << "Nhap so b: ";
    cin >> b;

    cout << "Nhap so c: ";
    cin >> c;

    ptb2(a, b, c);
}

