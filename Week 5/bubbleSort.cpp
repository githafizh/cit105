// FOR LOOP

#include <iostream>

using namespace std;

int data[10];
int n;

void show(){
    for (int i=0; i<n; i++){
        cout << "[" << data[i] << "]";
    }
    cout << endl;
}

void swap(int a, int b){
    int t;
    t = data[b];
    data[b] = data[a];
    data[a] = t;
}

void binary_search(int key){
    int A = 0;
    int R = n;
    int T;
    bool exist;

    do {
        T = (A+R/2);
        if (data[T] == key){
            exist = true;
        } else {
            A = T + 1;
        }
        
    }while();
}

void selection_sort(){
    for (int j=0; j<n; j++){
        int iMin = j;
        show();
        for (int i = j+1; i<n; i++){
            if (data[i] < data[iMin]){
                iMin = i;
            }
            show();
        }
        if (iMin != j){
            swap(j, iMin);
        }
        show();
    }
}

void insertion_sort(){
  int j;

  for (int i=1; i<n; i++){
      j=i;
      show();
      while (j>0 && data[j-1] > data[j]){
          swap(j, j-1);
          j = j-1;
          show();
      }
  }
}

void bubble_sort(){
    for (int i=0; i<n; i++){
        for (int j=0; j<n-1-i; j++){
            if (data[j] > data[j+1]){
                swap(j, j+1);
            }
            show();
        }
    }
    cout << endl;
}

void input(){
    cout << "Masukkan Jumlah Data = ";
    cin >> n;

    for (int i=0; i<n; i++){
        cout << "Masukkan Data Ke-" << i+1 << " = ";
        cin >> data[i];
    }
    cout << endl;
}

int main(){

    cout << "Algoritma Sort" << endl;
    cout << "---------------------" << endl;
    input();
    cout << "Proses Sort" << endl;
    show();
    //bubble_sort();
    //insertion_sort();
    selection_sort();

    return 0;
}