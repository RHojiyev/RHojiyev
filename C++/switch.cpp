 #include <iostream>
 using namespace std;
 int main(){
 
char oper; 
float num1, num2;
cout << " (+, -, *, /):"; 
cin >>oper;  
cin >> num1 >> num2;
 switch(oper){
case '+': cout <<num1 + num2; break; case '-': cout<< num1 - num2; break; case '*': cout<< num1 * num2; break; case '/': cout<< num1 / num2; break; default:cout << "Error!"; break; 
} 

return 0; 
}

