// Zane Brown
// Tailor Burkham

#include <iostream>
#include <fstream>
using namespace std;

// perform bubble sort
void bubbleSort(int array[], int size)
{
    
  // loop to access each array element
  for (int step = 0; step < (size-1); ++step) {
      
    // check if swapping occurs
    int swapped = 0;
    
    // loop to compare two elements
    for (int i = 0; i < (size-step-1); ++i) {
        
      // compare two array elements
      // change > to < to sort in descending order
      if (array[i] > array[i + 1]) {

        // swapping occurs if elements
        // are not in intended order 
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
        
        swapped = 1;
      }
    }

    // no swapping means the array is already sorted
    // so no need of further comparison
    if (swapped == 0)
      break;
  }
}

int main()
{
    const int SIZE = 25000;
    int data[SIZE];
    ifstream infile;
    ofstream outfile;
    infile.open("C:\Team1ASAH3\RandomOrder.txt");
    outfile.open("RandomOrderSorted.txt");

    for (int i = 0; i < SIZE; i++)
    {
        infile >> data[i];
    }
  
  // find the array's length
  int size = sizeof(data) / sizeof(data[0]);
  
  bubbleSort(data, size);

  for (int i = 0; i < SIZE; i++)
  {
      outfile << data[i] << " ";
  }
  return 0;
}