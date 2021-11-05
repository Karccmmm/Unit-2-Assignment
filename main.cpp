//C_STL_Library_Kareem Mahmoud.zip 
//Unit 2 Assignment 
#include <iostream>
#include <vector>
using namespace std;
                 
class MyClassVector1
{
    vector<int> vec;

public:
    MyClassVector1(vector<int> v)
    {
        vec = v;
    }
    void print()
    {
        /// print the value of vector
        for (int i = 0; i < vec.size(); i++)
            cout << vec[i] << " ";
    }
};

class MyClassVector2
{
    vector<int> vec;

public:
    MyClassVector2(vector<int> v) : vec(v)
    {    
    }
    void print()
    {
        /// print the value of vector
        for (int i = 0; i < vec.size(); i++)
            cout << vec[i] << " ";
    }
};

class MyClassVector3
{
    vector<int> &vec;

public:
    MyClassVector3(vector<int> &arr)
        : vec(arr)
    {
    }
    void print()
    {
        /// print the value of vector
        for (int i = 0; i < vec.size(); i++)
            cout << vec[i] << " ";
    }
};  
     
int main()
{
    //declare three vectors
    vector<int> vd;
    vector<int> vi;
    vector<int> vs;

    //add 3 elements to the vd vector
    for (int i = 1; i <= 3; i++)
        vd.push_back(i);

    //add 3 elements to the vi vector
    for (int i = 4; i <= 6; i++)
        vi.push_back(i);

    //add 3 elements to the vs vector
    for (int i = 7; i <= 9; i++)
        vs.push_back(i);

    //display the 3 elements in the vd vector
    cout << "Elements of vector vd: ";
    MyClassVector1 obj1(vd);
    obj1.print();

    //display the 3 elements in the vi vector
    cout << "\n\nElements of vector vi: ";
    MyClassVector2 obj2(vi);  
    obj2.print();

   //display 3 elements in the vs vector
    cout << "\n\nElements of vector vs: ";
    MyClassVector3 obj3(vs);
    obj3.print();           
    return 0;
}
