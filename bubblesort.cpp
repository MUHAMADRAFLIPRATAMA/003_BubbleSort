#include <iostream>
#include <string>
using namespace std;

int arr[20];     // Deklarasi variable global array a dengan ukuran 20
int n;           // Deklarasi variable global n untuk menyimpan banyaknya elemen pada array


void input() {   // procedur untuk input
    while (true) {
        cout << "Masukkan banyaknya elemen pada array : ";  // Output ke layar
        cin >> n;     // Input dari pengguna
        if (n <= 20)  // Jika n kurang dari atau sama dengan 20
            break;    // keluar dari lane
        else {        // jika
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";  // Output ke layar
        } 
    }
    
    cout << endl;
    cout << "===================" << endl;
    cout << "Masukkan Elemen Array" << endl;
    cout << "===================" << endl;

    for (int i = 0; i <n; i++){
        cout << "Data ke-" << (i+1) << ";";
        cin >> arr{i};
    }
}

void bubleSortArray(){
    int pass = 1;  //step 1

    do
    {
       for (int j = 0; j <= n -1-pass;j++)
    {  //step 2

        if (arr[j] > arr[j+1]){
            int temp;
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }

     pass = pass + 1; // step 4
        
    } while (pass <= n -1);
}

void display(){
    cout
}

void display (){
    cout  << endl;
    cout << "=================================" << endl;
    cout << "element array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j]; //menampilkan array
        if (j < n - 1) {
            cout << " --> ";
        }
    }
    cout << endl;
    cout << endl;
    cout << "jumlah pass = " << n - 1 << endl; // menampilkan jumlah dari pass
    cout << endl;
    cout << endl;

    
}

int main() {
    input ();

    bubblesortarray();
    display();

    system("pause");
    return 0;

}