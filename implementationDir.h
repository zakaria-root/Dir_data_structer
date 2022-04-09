#include <iostream>
#include "dir.h"

Dir::Dir() : size(0){};

void Dir::add(string name, string email, string phone = "")
{
    char c = email[0];
    int position = toupper(c) - 65;
    Contact contact(name, email, phone);
    if (lists[position].isEmpty())
        size++;
    lists[position].add(contact);
}
void Dir::remove(string name, string email = "")
{
    char c = email[0];
    int position = toupper(c) - 65;
    for (int index = position; index < NBLISTS - 1; index++)
        lists[index] = lists[index + 1];
    size--;
}
Node *Dir::search(string name, string email = "") const
{
    char c = email[0];
    int position = toupper(c) - 65;
    return lists[position].search(name, email);
}
void Dir::update(string searchEmail, string name, string email, string phone = "")
{
    char c = searchEmail[0];
    int position = toupper(c) - 65;
    lists[position].update(searchEmail, name, email, phone);
}
string Dir::toString() const
{
    return this->toString();
}
void Dir::print() const
{
    std::cout << toString();
}
bool Dir::isEmpty() const
{
    return size == 0;
}