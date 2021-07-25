#include <iostream>
#include <chrono> 
using namespace std;
using namespace std::chrono;
int count;
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}
int partition(int array[], int low, int high) {
  int pivot = array[high];
  int i = (low - 1);
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
      i++;
      swap(&array[i], &array[j]);
    }
  }
  swap(&array[i + 1], &array[high]);
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {
    int pi = partition(array, low, high);
   
    quickSort(array, low, pi - 1);
    quickSort(array, pi + 1, high);
  }
   count++;
}

int main() {
  int data[10000],n;
  cin>>n;

    for(int i=0;i<=n;i++)
    {
       data[i]=rand();
    }
    cout<<"random"<<endl;
   auto start = high_resolution_clock::now(); 
     quickSort(data, 0, n - 1);
      auto stop = high_resolution_clock::now();
      auto duration = duration_cast<microseconds>(stop - start); 
     cout << duration.count() << endl; 
      cout<<"counting="<<count<<endl;
      count=0;
    cout<<"descending"<<endl;
     for(int i=0;i<=n/2;i++)
    {
       swap(data[i],data[n-i]);
    }
     start = high_resolution_clock::now(); 
     quickSort(data, 0, n - 1);
     stop = high_resolution_clock::now();
       duration = duration_cast<microseconds>(stop - start); 
     cout << duration.count() << endl; 
      cout<<"counting="<<count<<endl;
      count =0;
cout<<"ascending"<<endl;
    start = high_resolution_clock::now(); 
     quickSort(data, 0, n - 1);
     stop = high_resolution_clock::now();
       duration = duration_cast<microseconds>(stop - start); 
     cout << duration.count() << endl; 
     count =0;
      cout<<"counting="<<count<<endl;
      for(int i=0;i<=n;i++)
    {
      data[i]=1;
    }
    start = high_resolution_clock::now(); 
     quickSort(data, 0, n - 1);
     stop = high_resolution_clock::now();
       duration = duration_cast<microseconds>(stop - start); 
     cout << duration.count() << endl; 
      cout<<"counting="<<count<<endl;
      count =0;
    

}
