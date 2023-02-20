#include <iostream>
#include <algorithm>

using namespace std;

void sortScores(int* scores, int size) {
    sort(scores, scores + size);
}

double scoreAverage(int* scores, int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += scores[i];
    }
    return sum / size;
}

int main() {
    int numScores;
    cout << "Nhap vao so phan tu trong mang: ";
    cin >> numScores;
    
    int* scores = new int[numScores]; 
    
    cout << "Enter " << numScores << " test scores:\n";
    for (int i = 0; i < numScores; i++) {
        cin >> *(scores + i);
    }
    
    sortScores(scores, numScores); 
    
    double avgScore = scoreAverage(scores, numScores); 
    
    cout << "\nMang sau khi duoc sap xep:\n";
    for (int i = 0; i < numScores; i++) {
        cout << *(scores + i) << " ";
    }
    cout << "\n\nDiem trung binh: " << avgScore << endl;
    
    delete[] scores; 
    return 0;
}
