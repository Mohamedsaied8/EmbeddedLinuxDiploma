#include <iostream>
#include <vector>
#include <algorithm>

struct Record
{
    int id;
    std::string address;
};

template <class T>
int LinearSearch(std::vector<T> list, T key)
{
    for(int i=0; i < list.size(); i++)
    {
        if(key == list[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    Record first_record;
    first_record.id = 1;
    first_record.address = "Maadi-Cairo";

    Record second_record;
    second_record.id = 2;
    second_record.address = "Montazah-Alex";

    std::vector<Record> list;
    list.push_back(first_record);
    list.push_back(second_record);

    auto Cmp_by_id = [](Record a, Record b){ return a.id > b.id;};
    auto Cmp_by_address = [](Record a, Record b){ return a.address > b.address;};
    std::sort(list.begin(), list.end(), Cmp_by_id);
    std::sort(list.begin(), list.end(), Cmp_by_address);

    for(auto record : list)
    {
        std::cout << " record with id " << record.id 
        << " has address " << record.address << "\n";
    }

    return 0;
}