/**
 * binary_search_tree.hpp
 * Written by : Quang Thanh Dong (c3436943)
 * Modified: 04/09/2024
 */

#include "binary_search_tree.h"

template<typename T>
binary_search_tree<T>::binary_search_tree()
{

}

template<typename T>
binary_search_tree<T>::~binary_search_tree()
{

}

template<typename T>
void binary_search_tree<T>::insert(const T& item)
{
    insert(item, root);
}

template<typename T>
void binary_search_tree<T>::remove(const std::string& key)
{

}

template<typename T>
bool binary_search_tree<T>::contains(const std::string& key) const
{
    return contains(key, root);
}

template<typename T>
T* binary_search_tree<T>::find(const std::string& key) const
{
    if (empty() || !root)
    {
        throw std::out_of_range("Tree if empty!");
    }

    
}

template<typename T>
T& binary_search_tree<T>::find_min() const
{
    if (empty() || !root)
    {
        throw std::out_of_range("Tree is empty!");
    }

    return find_min(root)->data;
}

template<typename T>
T& binary_search_tree<T>::find_max() const
{
    if (empty() || !root)
    {
        throw std::out_of_range("Tree if empty!");
    }

    return find_max(root)->data;
}

template<typename T>
void binary_search_tree<T>::clear()
{

}

template<typename T>
int binary_search_tree<T>::size() const
{
    return count;
}

template<typename T>
bool binary_search_tree<T>::empty() const
{
    if (size() == 0)
        return true;

    return false;
}

template<typename T>
void binary_search_tree<T>::print_inorder(std::ostream& out) const
{
    print_inorder(out, root);
}

template<typename T>
void binary_search_tree<T>::print_preorder(std::ostream& out) const
{
    print_preorder(out, root);
}

template<typename T>
void binary_search_tree<T>::print_postorder(std::ostream& out) const
{
    print_postorder(out, root);
}

template<typename T>
void binary_search_tree<T>::insert(const T& item, binary_node*& node)
{
    if (!node)
    {
        node = new binary_node(item);
        count++;
    }
    else if (item < node->data)
        insert(item, node->left);
    else if (node->data < item)
        insert(item, node->right);
}

template<typename T>
void binary_search_tree<T>::remove(const std::string& key, binary_node*& node)
{

}

template<typename T>
bool binary_search_tree<T>::contains(const std::string& key, binary_node* node) const
{
    if (!node)
        return false;
    if (node -> data.get_key() == key)
        return true;
    if (key < node->data.get_key())
        return contains(key, node->left);
    if (key > node->data.get_key())
        return contains(key, node->right);

    return false;
}

template<typename T>
typename binary_search_tree<T>::binary_node* binary_search_tree<T>::find(const std::string& key, binary_node* node) const
{

}

template<typename T>
typename binary_search_tree<T>::binary_node* binary_search_tree<T>::find_min(binary_node* node) const
{
    if (!node->left)
        return node;

    return find_min(node->left);
}

template<typename T>
typename binary_search_tree<T>::binary_node* binary_search_tree<T>::find_max(binary_node* node) const
{
    if (!node->right)
        return node;

    return find_max(node->right);
}

template<typename T>
void binary_search_tree<T>::clear(binary_node*& node)
{

}

template<typename T>
void binary_search_tree<T>::print_inorder(std::ostream& out, binary_node* node) const
{
    if (node)
    {
        print_inorder(out, node->left);
        out << node->data << " ";
        print_inorder(out, node->right);
    }
}

template<typename T>
void binary_search_tree<T>::print_preorder(std::ostream& out, binary_node* node) const
{

}

template<typename T>
void binary_search_tree<T>::print_postorder(std::ostream& out, binary_node* node) const
{
    
}

template <typename T>
std::ostream& operator <<(std::ostream& out, const binary_search_tree<T>& tree)
{
    if (tree.empty())
        out << "Empty tree!" << std::endl;
    
    else
        tree.print_inorder(out);

    return out;
}
