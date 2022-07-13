int bubbleSort(int n, int arr[])
{
    int counter = 1;
    while(counter < n-1)
    {
        for(int i = 0; i < n-counter; i++){
            if(arr[i] < arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }
    return arr[n];
}