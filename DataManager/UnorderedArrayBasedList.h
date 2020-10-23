#pragma once
#ifndef H_unorderedArrayListType
#define H_unorderedArrayListType

#include "ArrayBasedList.h"  

template <class elemType>
class unorderedArrayListType : public arrayListType<elemType>
{
public:
    void insertAt(int location, elemType& insertName, bool insertSeat);
    void insertEnd(elemType& insertName, bool insertSeat);
    void replaceAt(int location, elemType& insertName, bool insertSeat);
    int seqSearch(const elemType& searchItem) const;
    void remove(const elemType& removeItem);

    unorderedArrayListType(int size = 60);
    //Constructor

};

template <class elemType>
void unorderedArrayListType<elemType>::insertAt(int location, elemType& insertName, bool insertSeat)
{
    if (location < 0 || location >= this->maxSize)
        cout << "The position of the item to be inserted "
        << "is out of range." << endl;
    else
    {
        this->Name[location] = insertName; //insert the item at 
        this->Seats[location] = insertSeat;
    }
} //end insertAt

template <class elemType>
void unorderedArrayListType<elemType>::insertEnd
(elemType& insertName, bool insertSeat)
{
    if (this->length >= this->maxSize)  //the list is full
        cout << "Cannot insert in a full list." << endl;
    else
    {
        this->Name[this->length] = insertName; //insert the item at the end
        this->Seats[this->length] = insertSeat;
    }
} //end insertEnd

template <class elemType>
int unorderedArrayListType<elemType>::seqSearch
(const elemType& searchItem) const
{
    int loc;
    bool found = false;

    for (loc = 0; loc < this->length; loc++)
        if (this->Name[loc] == searchItem)
        {
            found = true;
            break;
        }

    if (found)
        return loc;
    else
        return -1;
} //end seqSearch

template <class elemType>
void unorderedArrayListType<elemType>::remove
(const elemType& removeItem)
{
    int loc;

    if (this->length == 0)
        cout << "Cannot delete from an empty list." << endl;
    else
    {
        loc = seqSearch(removeItem);

        if (loc != -1)
            this->removeAt(loc);
        else
            cout << "The item to be deleted is not in the list."
            << endl;
    }
} //end remove

template <class elemType>
void unorderedArrayListType<elemType>::replaceAt(int location,
    elemType& insertName, bool insertSeat)
{
    if (location < 0 || location >= this->length)
        cout << "The location of the item to be "
        << "replaced is out of range." << endl;
    else
    {
        this->Name[location] = insertName;
        this->List[location] = insertSeat;
    }
} //end replaceAt

template <class elemType>
unorderedArrayListType<elemType>::unorderedArrayListType(int size)
    : arrayListType<elemType>(size)
{
}
#endif