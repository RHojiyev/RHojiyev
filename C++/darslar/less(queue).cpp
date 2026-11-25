#include <iostream> 
#include <queue> 
using namespace std; 
 
class Student { 
private:   
    queue<string> name; 
    queue<int> age; 
 
public:   
    Student(queue<string> i, queue<int> y) { 
        name = i;   
        age = y; 
    }  
 
    int get_first() { 
        return age.front(); 
    } 
 
    int get_last() { 
        return age.back(); 
    } 
 
    void print() { 
        cout << "TOTAL STUDENTS" << endl; 
        int x = name.size(); 
        for (int i=0; i<x; i++) { 
            cout << name.front() << " " << age.front() << endl; 
            name.pop(); 
            age.pop();  
        } 
    }   
};   
 
int main() { 
    int n; 
    cout << "Enter the number of students: "; 
    cin >> n; 
 
    queue<int> age;   
    queue<string> name;   
 
    string k; 
    int y; 
 
    cout << "Enter name and age:" << endl; 
 
    for (int i=1; i<=n; i++) { 
        cin >> k;   
        name.push(k);   
        cin >> y;   
        age.push(y);   
    } 
 
    Student students(name, age);  
 
    cout << "First student: " << students.get_first() << endl;   
    cout << "Last student in line: " << students.get_last() << endl;   
    students.print();   
    return 0; 
} 
 
 
 
Yana savolingiz bo'lsa, menga xabar bering.