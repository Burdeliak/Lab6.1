#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

const int SIZE = 24;


void COUT(int mas[], int size, int i = 0) {
    if (i == size) {
        cout << endl;
        return;
    }
    cout << setw(4) << mas[i] << " ";
    COUT(mas, size, i + 1);
}


int CountElements(int mas[], int size, int i = 0) {
    if (i == size) return 0;
    return ((mas[i] < 0 || mas[i] % 2 != 0) ? 1 : 0) + CountElements(mas, size, i + 1);
}


int SumElements(int mas[], int size, int i = 0) {
    if (i == size) return 0;
    return ((mas[i] < 0 || mas[i] % 2 != 0) ? mas[i] : 0) + SumElements(mas, size, i + 1);
}


void NullElements(int mas[], int size, int i = 0) {
    if (i == size) return;
    if (mas[i] < 0 || mas[i] % 2 != 0) {
        mas[i] = 0;
    }
    NullElements(mas, size, i + 1);
}

int main() {
    srand((unsigned)time(0));  
    setlocale(LC_CTYPE, "ukr"); 
    int a[SIZE];

    
    for (int i = 0; i < SIZE; i++) {
        a[i] = rand() % 66 - 50; 
    }

    cout << "Початковий масив: " << endl;
    COUT(a, SIZE); 

    
    int count = CountElements(a, SIZE);
   
    int sum = SumElements(a, SIZE);

    cout << "Кількість елементів, що відповідають критерію (від'ємні або непарні): " << count << endl;
    cout << "Сума елементів, що відповідають критерію (від'ємні або непарні): " << sum << endl;

    
    NullElements(a, SIZE);

    cout << "Модифікований масив: " << endl;
    COUT(a, SIZE); 

    return 0;
}