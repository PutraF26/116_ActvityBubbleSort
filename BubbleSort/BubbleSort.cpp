#include <iostream>

using namespace std;
int a[20];          //deklarasi array a dengan ukuran 20
int n;              //deklarasi variabel n untuk menyimpan banyaknya elemen pada array


void input() {      //Procedure untuk input
    while (true) {  //Looping
        cout << "Masukan banyaknya elemen pada array : "; //Output ke layar
        cin >> n;      //Input dari pengguna
        if (n <= 20)    //Jika n kurang dari atau sama dengan 20
            break;      //keluar dari loop
        else {          // Jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; //Output ke layar

        }
    }

    cout << endl;                            //Output layar kosong
    cout << "=====================" << endl; //Output Ke layar
    cout << "Masukkan elemen Array" << endl; //Output Ke layar
    cout << "=====================" << endl; //Output ke layar

    for (int i = 0; i < n; i++) {  //Looping dengan 1 dimulai dari 0 hingga n-1
        cout << "Data ke-" << (i + 1) << ": "; //Output ke layar
        cin >> a[1];                           // input dari prngguna


    }
}


void display() { //Procedure untuk menampilkan hasil
    cout << endl;                                         //Output baris kosong
    cout << "=================================" << endl;  //Output Ke layar
    cout << "Element Array yang telah tersusun" << endl;  //Output Ke layar
    cout << "=================================" << endl;  //Output Ke layar
    for (int j = 0; j < n; j++) {                      //Looping dengan j dimulai dari 0 hingga n-1
        cout << a[j] << endl;                            //Output Ke layar
    }
    cout << endl;                                       //Output baris kosong
}

void bubbleSortArray() {   //Procedure untuk mengurutkan array dengan metode bubble sort
    for (int i = 1; i < n; i++) {           //Looping dengan i dimulai dari 1 hingga n-1
        for (int j = 0; j < n - 1; j++) {   //Looping dengan j dimulai dari 0 hingga n1-i-1
            if (a[j] > a[j + 1]) {          //Jika nilai pada a[j] lebih besar dari a[j+1}
                int temp = a[j];            //simpan nilai a[j] ke variabel sementara temp
                a[j] = a[j + 1];            //Assign niali a[j+1] ke a{j}
                a[j + 1] = temp;            //Assign nilai temp ke a[j+1]
            }
        }
    }
}

int main() {            //Memanggil read( dari class BubbleSort
    input();            //Memmangil bubblesortarray() dari class BubbleSort
    bubbleSortArray();  //Memanggil display() dari class BubblesortArray
    display();
    return 0;
}