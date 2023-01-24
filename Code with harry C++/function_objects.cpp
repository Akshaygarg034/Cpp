#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {1, 20, 14, 70, 9};
sort(arr, arr+4, greater<int>());
for (int i = 0; i < 5; i++)
{
    cout<<arr[i]<<endl;
}

    return 0;
}