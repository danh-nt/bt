//https://www.geeksforgeeks.org/quick-sort/
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
  
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
          int t = ar[i];
          arr[i]=arr[j];
          arr[j]=t;
        }
    }
    int g=arr[i+1];
    arr[i+1]=arr[high];
    arr[high]=g;
    return (i + 1);
}
 
// Function to implement Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
