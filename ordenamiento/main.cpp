#include <iostream>

using namespace std;
/*
int quicksort(int arr[],int inicio,int fin){
        int medio,i,j,piv,tam;
        medio=(inicio + fin)/2;
        piv=arr[medio];
        i=inicio;
        j=fin;
        while(i<=j){
            while(arr[i] < piv){
                i++;

            while(arr[i] < piv){
                i++;
            if(i<=j){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                j++;
                j--;
            }
             for(int i=0;i<tam;i++){
            cout<<arr[i]<<endl;
        }
        }
        }
}

int main(){
    int tam;
    cout<<"cuantos valores deseas?: ";
    cin>>tam;
    int x[tam];
    for (int i=0;i<tam;i++){
        cout<<"ingrese los numeros del arreglo: ";
        cin>>x[i];
    }cout<<quicksort(x,0,tam-1)<<endl;

return 0;
}
*/

// QuickSort.cpp: Aplicación del algoritmo QuickSort en C++
// Adrián Muñoz Lloret.
#include <iostream>  //para cin y cout
#include <stdlib.h>  //para el rand()

using namespace std;

void quickSort(int *A, int izq, int der) {

 int piv = A[izq];
 int i = izq;
 int j = der;
 int aux;

 while (i < j) {
  while (A[i] <= piv && i < j) i++;
  while (A[j] > piv) j--;
  if (i < j) {
   aux  = A[i];
   A[i] = A[j];
   A[j] = aux;
  }
 }

 A[izq] = A[j];
 A[j] = piv;
 if (izq<j - 1)
  quickSort(A, izq, j - 1);
 if (j + 1 <der)
  quickSort(A, j + 1, der);

}

int main() {
 int A[10];

 cout << endl << " Y el array de valores ordenados es: " << endl;
 quickSort(A, 0, 9);

 for (int i = 0; i < 10; i++) {
  cout << A[i] << " ";
 }

 return 0;
}
