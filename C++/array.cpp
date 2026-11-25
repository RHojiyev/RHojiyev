class MyClass {
private:
    int myArray[5];

public:
    MyClass(int* arr) { 
// constructor taking an array as argument
        for(int i = 0; i < 5; i++) {
            myArray[i] = arr[i];
        }
    }
};
int main()
{
int arr[5] = {1, 2, 3, 4, 5};
MyClass myObject(arr); // creates a new instance of MyClass using the constructor

cout << myObject.getArray(0) << endl; // prints 1
cout << myObject.getArray(1) << endl; // prints 2
cout << myObject.getArray(2) << endl; // prints 3
}