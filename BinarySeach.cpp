/*-----------------------------------------------BINARY SEARCH IN AN ARRAY--------------------------------------------------------------*/
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
	}


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
    