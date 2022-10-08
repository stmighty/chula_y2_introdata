#include <iostream>
using namespace std;


namespace CP
{
    template <typename T>
    class vector
    {
        protected:
            T *mData;           //data (dynamic array)   //*mData point to dynamic array
                                //int* y = new int[1]; T *mData is the same
        
            size_t mCap;        //size of dynamic array
            size_t mSize;       //size of data
        
            void rangeCheck(int n)
            {
                if(n < 0 || (size_t)n >=mSize)
                {
                    throw std::out_of_range("index out of range");
                }
            }
            
            void expand(size_t capacity)
            {
                T *arr = new T[capacity]();
                for(size_t i=0; i < mSize; i++)
                {
                    arr[i] = mData[i];
                }
                delete[] mData;
                mData = arr;
                mCap = capacity;
            }
        
            void ensureCapacity(size_t capacity)
            {
                if(capacity > mCap)
                {
                    size_t s = (capacity > 2 * mCap) ? capacity : 2 * mCap;
                    /*if(capacity > 2 * mCap)
                    {
                        s = capacity;
                    }
                    else
                    {
                        s = 2 * mCap;
                    }*/
                    expand(s);
                }
            }
        
            bool empty() const
            {
                return mSize == 0;
            }
            
            size_t size() const
            {
                return mSize;
            }
            
            size_t capacity() const
            {
                return mCap;
            }
        
        public:
            //constructor
            vector()    //no initial value ex vector<int> v;  //default constructor
            {
                int cap = 1;
                mData = new T[cap]();
                mCap = cap;
                mSize = 0;
            }
            vector(size_t cap)              //custom constructor       //ex. vector<flaot> v1(10)
            {
                mData = new T[cap]();
                mCap = cap;
                mSize = cap;
            }
        
            //destructor
            ~vector()
            {
                delete [] mData;
            }
        
            T& at(int index)             // return  by reference
            {
                rangeCheck(index);
                return mData[index];
            }
            
            T& operator[](int index)     //return by reference //ex. so wecan use v[3] = 9 because we return by                               reference
            {
                return mData[index];
            }
        
        
            void push_back(const T& element)
            {
                ensureCapacity(mSize + 1);
                mData[mSize] = element;
                mSize++;
            }
        
            void pop_back()
            {
                mSize--;
            }
        
        
            vector(const vector<T> &a)
            {
                this->mData = new T[a.capacity]();   //why cant this.mData; //we use this-> not this.
                this->mCap = a.capacity;
                this->mSize = a.size();
            
                for(size_t i=0; i<a.size();i++)
                {
                    mData[i] = a[i];
                }
            }
        
            vector<T> &operator=(vector<T> other)
            {
                using std::swap;
                swap(this->mSize, other.mSize);
                swap(this->mCap, other.mCap);
                swap(this->mData, other.mData);
                return *this;
            }
        
            // same as
            // vector<T>& operator=(vector<T> &other)
            // {
            //  if (mData != other.mData)
            //  {
            //      delete [] mData;
            //      mData = new T[other.capacity()]();
            //      mCap = other.capacity();
            //      mSize = other.size();
            //      for (size_t i=0; i<other.size(); i++)
            //      {
            //          mData[i] = other[i];
            //      }
            //  }
            // }       // no return ??
        
            typedef T* iterator;    //ex. typedef int Haha// -> Haha is int
        
            iterator begin()
            {
                return mData[0];
            }
            iterator end()
            {
                return begin()+mSize;
            }
        
            iterator insert(iterator it, const T& element)
            {
                size_t pos = it - this->begin();
                ensureCapacity(mSize+1);
                for(size_t i = mSize; i > pos; i--)
                {
                    mData[i] = mData[i-1];
                }
                mData[pos] = element;
                mSize++;
                return (begin() + pos);
                
                //beware of for(int i = pos; i < mSzie; i++)
                //          {
                //              mData[i+1] = mData[i]    (ex you want index4 to be index 3 but old index 3 has been changed
                //          }
            }
            void erase(iterator it)
            {
                while((it+1) != end())         // Notice that many times we dont use this-> because if name of parameter
                {                              // isnt same as datafield we can use or not use this-> 
                    *it = *(it + 1);           // in this example end() is the same as this->end();
                    it++;
                }
                mSize--;
            }
    };
}


int main()
{
    return (0);
}
