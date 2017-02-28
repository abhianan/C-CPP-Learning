/*Vectors: is a sequential container same as array . It stores collection of data which is of same data type.Difference between array and vector is
In array we need to initialize the array with a size and its hard to change the size of array.But vectors can be resized or dynamically changed.
In addition vector come with its own functionality.*/
#include <iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> my_vec; /// we can store some fix value i.e. we can define my_vec(10) to store 10 values.
    my_vec.push_back(10);///adding element to the vector from the back
    my_vec.push_back(20);///index of vector start from zero from top to bottom
    my_vec.push_back(30);
    my_vec.push_back(40);

    cout<<"Size of vector= "<<my_vec.size()<<endl;
    for(unsigned int i=0;i<my_vec.size();i++)
    {
        cout<<"Vector "<<i<<" "<<my_vec[i]<<endl;
    }
    my_vec.erase(my_vec.begin());
    my_vec.erase(my_vec.begin()+2);
    my_vec.erase(remove(my_vec.begin(),my_vec.end(),30),my_vec.end()); ///erasing particular value so we use algorithm library
    my_vec.clear();///will clear the vector or vector will be empty
    for(unsigned int i=0;i<my_vec.size();i++)
    {
        cout<<"Vector "<<i<<" "<<my_vec.at(i)<<endl;
    }
    cout<<"Vector is empty or not "<<my_vec.empty()<<endl; ///0 means not empty and 1 means empty
    ///int myarr[3]={10,20,30};array
    return 0;
}
