#ifndef VECTOR_H
#define VECTOR_H

#include <initializer_list>

/*
A complete implementation of the vector class from the C++ standard template library.
*/
class vector
{
    private:

        /*
        The number of elements in the vector.
        */
        int size;

        /*
        The number of elements the vector can possibly hold without calling grow().
        */

        /*
        All elements in the vector.
        */
        int *array;


        /*
        Expands the capacity of the vector by 100.
        */
        void grow();

    public:

        /*
        Constructs a vector of size 0.
        */
        vector();

        /*
        Copy constructor. Deep copy of right.
        */
        vector(vector const &original);
        
        /*
        Assignment operator constructor. Deep copy assignment of the value of right.
        */
        vector operator=(vector right);
        
        /*
        Destructor.
        */
        ~vector();
        
        /*
        Constructs a vector from a given initalizer list.
        */
        vector(initializer_list<int>);
        
        /*
        Constructs a vector of n arg(s).
        */
        vector(int arg, int n);
        
        
        
        
        /*
        Returns the number of elements in the vector.
        */
        int size();

        /*
        Returns the number elements the vector can hold without calling grow().
        */
        int capacity();
        
        /*
        Returns true if the vector is size 0, even if capacity != 0.
        */
        bool isEmpty();
        
        /*
        Returns the element stored at index 0.
        */
        int front();
        
        /*
        Returns the element stored at the last index.
        */
        int back();

        /*
        Inserts an element after the last index then increases size by 1.
        */
        void push_back();
        
        /*
        Inserts an element at index 0,
        shifts all elements by the right by 1,
        then increases size by 1.
        */
        void push_front();
        
        /*
        
        */
        void pop_back();
        
        /*
        Removes the element at index 0,
        shifts all elements by the left by 1,
        then decreases size by 1.
        */
        void pop_front();
        
        /*
        
        */
        void insert(int arg, int index);
        
        /*
        
        */
        void remove(int index);
        
        /*
        
        */
        void clear();

        /*
        
        */
        void find();

        /*
        
        */
        void erase();
        
        
        
        
        /*
        
        */
        bool operator==(vector right);

        /*
        
        */
        bool operator<(vector right);

        /*
        
        */
        bool operator>(vector right);

        /*
        
        */
        bool operator<=(vector right);

        /*
        
        */
        bool operator >=(vector right);

        /*
        
        */
        void operator+(vector right);
};

#endif