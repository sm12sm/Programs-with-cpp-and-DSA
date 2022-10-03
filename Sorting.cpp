/*------------------------------------------------------SELECTION SORTING--------------------------------------------------------------
#include <iostream>
using namespace std;
    int selection_sort(int arr[],int n){
         for (int i=0;i<n-1;i++){
            int num=i;
            for(int j=i+1;j<=n;j++){
                if(arr[j]<arr[num]){
                    num=j;
                }
            }
            swap(arr[num],arr[i]);
         }   
           
    }
    int main()
    {
        int arr[]={2,3,4,1,42,21};
        selection_sort(arr,6);
        for (int k=0;k<6;k++){
            cout<<arr[k]<<" ";
        }

        return 0;
    }*/

/*--------------------------------------------------------BUBBLE SORT---------------------------------------------------------------
#include <iostream >
using namespace std;
    int bubbleSort(int arr[], int n)
{   
    for(int i = 1; i<n; i++) {
        for(int j =0; j<n-i; j++) {
            
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
             }
        }
           
    }
    return 0;
}
int main()
    {
        int arr[]={2,3,4,1,42,21};
        bubbleSort(arr,6);
        for (int k=0;k<6;k++){
            cout<<arr[k]<<" ";
        }

        return 0;
    }*/


/*-----------------------------------------------------------------------INSERTION SORT------------------------------------------------------------------------
#include <iostream >
using namespace std;
    int insertionSort(int arr[], int n)
{   
    for(int i = 1; i<n; i++) {
        int temp=arr[i];int j=i-1;
        while(j>-1 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
          }
        arr[j+1]=temp;
    }
    return 0;
}
int main()
    {
        int arr[]={2,3,4,1,42,21};
        insertionSort(arr,6);
        for (int k=0;k<6;k++){
            cout<<arr[k]<<" ";
        }

        return 0;}*/


/*--------------------------------------------------QUICK/SELECTION EXCHANGE/PARTITION EXCHANGE SORT------------------------------------------------------------------
#include<iostream>
using namespace std;

int partition( int arr[], int s, int e) {

    int pivot = arr[s];

    int cnt = 0;
    for(int i = s+1; i<=e; i++) {
        if(arr[i] <=pivot) {
            cnt++;
        }
    }

    //place pivot at right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    //left and right wala part smbhal lete h 
    int i = s, j = e;

    while(i < pivotIndex && j > pivotIndex) {

        while(arr[i] <= pivot) 
        {
            i++;
        }

        while(arr[j] > pivot) {
            j--;
        }

        if(i < pivotIndex && j > pivotIndex) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }

    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e) {

    //base case
    if(s >= e) 
        return ;

    //partitioon karenfe
    int p = partition(arr, s, e);

    //left part sort karo
    quickSort(arr, s, p-1);

    //right wala part sort karo
    quickSort(arr, p+1, e);

}

int main() {

    int arr[ ] = {2,4,1,6,9,16};
    int n = 6;

    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++) 
    {
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}*/


/*------------------------------------------------------------------------- COUNT SORT-------------------------------------------------------------------------------
#include<iostream>
using namespace std;
int Max_num(int a[],int n){
    int max=INT16_MIN; int i;
    for(i=0;i<n;i++) {
        if(a[i]>max){
            max=a[i];
        }    
        }
        return max;
        }
int Countsort(int a[],int n){
    int max=Max_num(a,n),i,j;
    int C[100];
    for(i=0;i<max+1;i++){
        C[i]=0;
    }
    for(i=0;i<n;i++){
        C[a[i]]++;
    }
    i=0,j=0;
    while(i<max+1){
        if(C[i]>0){
            a[j]=i;
            j++;
            C[i]--;
        }
        else{
            i++;
        }
    }return 0;
    }
int main(){
      int a[]={11,13,7,12,16,9,24,5,10,3},n=10,i;
    Countsort(a,n);
    for(i=0;i<10;i++)
    cout<<" "<<a[i];
    return 0;
}
