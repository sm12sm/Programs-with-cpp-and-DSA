
/* ------------------------------------------------LINEAR SEARCH----------------------------------------------------------------------
#include<iostream>
using namespace std;
int keysearch(int arr[],int size,int key)
{
    int i,flag=0;
    for (i=0;i<size;i++)
    {
        if (arr[i]==key)
        {
            flag= 1;
        }

        
    }
    return flag;

}
int main()
{
     int arr[10] = { 5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
     int key;

    cout << "enter key element";
    cin >> key;
    if (keysearch(arr,10,key)==0)
    { 
        cout<<"no";
    
    }
    else 
    { cout << "yes";
    }


}*/


/*------------------------------------------------------MAX AND MIN VALUE---------------------------------------------------------------
#include<iostream>
using namespace std;

int getMin(int num[], int n) {

    int mini = INT16_MAX;
    
    for(int i = 0; i<n; i++) {
        
        if(num[i] < mini){
            mini = num[i];
        }
    }
    return mini;
}

int getMax(int num[], int n) {

    int maxi = INT_FAST8_MIN;
    
    for(int i = 0; i<n; i++) {

        if(num[i] > maxi){
            maxi = num[i];
        }
    }

    //returning max value
    return maxi;
}

int main() {

    int size;
    cout<< "enter size of an array";
    cin >> size;

    int num[100];

    cout << "taking input in array";
    for(int i = 0; i<size; i++) {
        cin >> num[i];
    }

    cout << " Maximum value is " << getMax(num, size) << endl;
    cout << " Minimum value is " << getMin(num, size) << endl;


    return 0;

}*/


/* --------------------------------------------------------REVERSE -----------------------------------------------------------------------
#include <iostream>
using namespace std;
void reverse(int arr[], int n) {

    int start = 0;
    int end = n-1;

    while(start<=end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {

    int arr[6] = {1,4,0,5,-2,15};
    int brr[5] = {2,6,3,9,4};

    reverse(arr, 6);
    reverse(brr, 5);
    for(int i=0; i<6; i++) 
    {
        cout << arr[i] << " ";
        }
    cout<< endl;
     for(int j=0; j<6; j++) 
    {
        cout << brr[j] << " ";
        }

    return 0;
}*/


/*------------------------------------------------INTERSECTION----------------------------------------------------------------
#include <iostream>
using namespace std;
int intersect(int arr[], int n, int brr[], int m)
{
    int i=0,j=0;
    while (i<n && j<m){
        if (arr[i]==brr[j])
        {
            cout<< arr[i]<< " ";
        
            i++;
            j++;
        }
        else if (arr[i]>brr[j]){
            j++;
        }
        else{
            i++;
        }
    }
    return arr[i];
}
int main()
{
    int arr[10]={12,13,34,56,456,562};
    int brr[10]={12,32,34,53,562,4536};
    intersect(arr,6,brr,6);
}*/
    
