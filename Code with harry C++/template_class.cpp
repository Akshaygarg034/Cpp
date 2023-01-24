#include <iostream>
using namespace std;

template <class T>
class vector
{
public:
    int size;
    T *ptr;
    vector(int m)
    {
        size = m;
        ptr = new T[size];
    }
    T dotProduct(vector v)
    {
        T d;
        for (int i = 0; i < size; i++)
        {
            d += this->ptr[i] * v.ptr[i];
        }
        return d;
    }
};

int main()
{
vector<float> v1(3);
v1.ptr[0] = 1.4;
v1.ptr[1] = 4.6;
v1.ptr[2] = 2.3;

vector<float> v2(3);
v2.ptr[0] = 4.4;
v2.ptr[1] = 5.5;
v2.ptr[2] = 1.5;

float dot = v1.dotProduct(v2);
cout<<"The dot product of these two vectors is "<<dot<<endl;
    return 0;
}