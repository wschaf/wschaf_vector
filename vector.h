#ifndef VECTOR_H
#define VECTOR_H

#include <initializer_list>

class vector
{
    private:
        int size;
        int *array;

        void expand();
        void shrink();
    public:
        vector();
        vector(vector const &original);
        vector operator=(vector right);
        ~vector();
        vector(initializer_list<int>);
        vector(int arg, int n);

        int size();
        bool isEmpty();
        int front();
        int back();

        void push_back();
        void push_front();
        void pop_back();
        void pop_front();
        void insert(int arg, int index);
        void remove(int index);
        void clear();
        void find();

        bool operator==(vector right);
        bool operator<(vector right);
        bool operator>(vector right);
        bool operator<=(vector right);
        bool operator >=(vector right);

        void operator+(vector right);
        

};

#endif