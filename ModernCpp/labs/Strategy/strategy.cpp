#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Record
{
    string name;
    uint16_t street_id;
};

template <class T>
T max(T n1,T n2)
{
    return n1 > n2? n1 : n2;
}

//factory method
template <class T , class S>
T make(S& first, S& second)
{
    T temp (first_char);
    temp += second_char;
    return temp;
}

 
//template function
template <class T>
void sort(T::iterator &first, T::iterator &last, std::function<T> comp)
{
    //

}

// it first_cont_begin_itr , it first_cont_end_itr, it second_cont_begin_itr , ptr_func
int main()
{
    vector<Record> vr(2);

    cout <<"strategy pattern example\n";
    vr[0].name = "Ahmed";
    vr[0].street_id = 1;

    vr[1].name = "Samir";
    vr[1].street_id = 2;

    auto CmpareByName = [](const Record& a, const Record& b)->bool{return a.name > b.name;};
    auto CmpareByAddress = [](const Record& a, const Record& b)->bool{return a.street_id > b.street_id;};

    sort(vr.begin(), vr.end(), CmpareByName); //depend on how insertion sort 
   
    for(auto v : vr)
    {
        cout << "vec.name:" << v.name <<endl;
    }
    
    sort(vr.begin(),vr.end(), CmpareByAddress);

    for(auto v : vr)
    {
        cout << "vec.address:" << v.street_id <<endl;
    }
    
    return 0;
}