#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> v){
    for (int i = 0; i < v.size();i++)
    {
       cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int size;
    int value;
    vector<int> vec1;

    cout<<"Enter the size of vector: "<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the elements you want to store in vector: "<<endl;
        cin>>value;
        vec1.push_back(value);
    }
    vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter+1, 10);
    // vec1.insert(iter+1, 5, 10);
    display(vec1);
    // cout<<endl<<vec1.at(3);

    // vector<int> vec2(4);

    // vector<int> vec3(4, 5);
    // display(vec3);

    // vector<int> vec4(vec1);
    // display(vec4);

    // vec1.erase(iter, iter+2);
    // vec1.clear();
    // display(vec1);

    // vec1.push_back(5);
    // display(vec1);
    
    // vector<int> vec5(4);
    // cout<<vec5.at(2);
    return 0;
}