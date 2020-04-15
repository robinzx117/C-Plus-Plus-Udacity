//header file for main.cpp

#include<iostream>

using namespace std;

const int SIZE = 5;
template <class T>
class StudentRecord{
    private:
        const int size = SIZE;
        T grades[SIZE];
        int studentId;
    public:
        StudentRecord(T defaultInput);//A default constructor with a default value
        void setGrades(T* input);
        void setId(int idIn);
        void printGrades();
};

template<class T>
StudentRecord<T>::StudentRecord(T defaultInput){
    //TODO: allocate memory for the array
    //by assigning a default value to each
    //array element.
    for(int i=0; i<SIZE; i++){
        grades[i] = defaultInput;
    }
}

template<class T>
void StudentRecord<T>::setGrades(T* input){
    for(int i=0; i<SIZE;++i){
        grades[i] = input[i];
    }
}

template<class T>
void StudentRecord<T>::setId(int idIn){
    studentId = idIn;
}

template<class T>
void StudentRecord<T>::printGrades(){
    cout<<"ID# "<<studentId<<":\n";
    for(int i=0;i<SIZE;++i){
        cout<<grades[i]<<"\n";
    }
    cout<<"\n";
}