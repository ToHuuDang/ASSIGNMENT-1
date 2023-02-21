#include <iostream>
using namespace std;

double distance_traveled(double speed, double time) {
    return speed * time;
}

void print_table(double speed, double time) {
    cout << "Hour\tDistance Traveled\n";

    for (int i = 1; i <= time; i++) {
        double distance = distance_traveled(speed, i);
       cout << i << "\t" << distance << "\n";
    }
}

int main() {
    double speed, time;

    cout << "Nhap vao toc do:  ";
    cin >> speed;

    cout << "Nhap vao thoi gian: ";
    cin >> time;

    print_table(speed, time);

    return 0;
}

// Lab1 update
