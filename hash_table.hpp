/**
 * hash_table.hpp
 * Written by : Quang Thanh Dong (c3436943)
 * Modified: 04/09/2024
 */

#include "hash_table.h"

template<typename T>
hash_table<T>::hash_table(int num_cells)
{
    capacity = num_cells;
    count = 0;
    std::list<T> new_list;
    std::vector<std::list<T> > table(capacity, new_list);
}

template<typename T>
hash_table<T>::~hash_table()
{

}

template<typename T>
void hash_table<T>::insert(const T& item)
{
    int location = hash_function(item.get_key());
    table[location] = item;
    count++;
}

template<typename T>
void hash_table<T>::remove(const std::string& key)
{
    int location = hash_function(key);
    T result = table[location];
    table[location] = T();
    count--;
}

template<typename T>
T* hash_table<T>::get(const std::string& key)
{
    int location = hash_function(key);
    return &table[location];
}

template<typename T>
bool hash_table<T>::contains(const std::string& key)
{
    for(typename std::vector<std::list<T> >::iterator itr = table.begin(); itr != table.end(); itr++ )
    {
        if (list_contains(*itr, key))
            return true;
    }
    
    return false;
}

template<typename T>
void hash_table<T>::clear()
{

}

template<typename T>
bool hash_table<T>::empty() const
{
    if (count == 0)
        return true;

    return false;
}

template<typename T>
int hash_table<T>::size() const
{
    return count;
}

template<typename T>
void hash_table<T>::print(std::ostream& os) const
{
    for (int i = 0; i < capacity; i++)
        os << i << ":" << table[i] << std::endl;

}

template <typename T>
std::ostream& operator <<(std::ostream& out, const hash_table<T>& ht)
{

}