/*-----------------------------------------------BINARY SEARCH IN AN ARRAY--------------------------------------------------------------
#include<iostream>
using namespace std;
 int find_element(int arr[],int size,int key) {
	int s = 0, e =size - 1;
	int mid=(s + e) / 2;
    while(s<=e){
		if (key==arr[mid])
		{
		     return mid;
		}
		else if(key<arr[mid]){
			e--;
		}
        else if(key>arr[mid]){
			s++;
		}
		mid=(s+e)/2;
	}
	return mid;
 }
 int main()
	{
		int arr[]={0,1,3,4,5,6,3,2};
		int key;
		cout<<"enter the key element:";
		cin>>key;
     	cout<<"Element"<< " "<<key<< " "<<"at position"<<" "<<find_element(arr,8,key)<<endl;
		return 0; 
	}*/


/*-----------------------------------------------PEAK ELEMENT IN MOUNTAIN ARRAY------------------------------------------------------
#include<iostream>
using namespace std;

    int find_peak(int arr[],int size) {
	int s = 0, e =size - 1;
	int mid=(s + e) / 2;
	while (s < e)
	{
		if(arr[mid] < arr[mid+1])
     			s=mid+1;
    		else
      			e = mid;
    
		mid = (s + e) / 2;
	}
	return s;
    }
	int main()
	{
		int arr[]={0,1,3,4,5,6,3,2,1,0};
		cout<<"Peak element is"<<find_peak(arr,10)<<endl;
		return 0; 

	}*/
	 
	 
    /*----------------------------------------------FIRST AND LAST OCCURANCE---------------------------------------------------------
	#include<vector>
using namespace std;
int firstOcc(vector<int>& arr, int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(vector<int>& arr, int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int> p;
    p.first = firstOcc(arr, n, k);
    p.second = lastOcc(arr, n, k);
    
    return p;
}*/
    
