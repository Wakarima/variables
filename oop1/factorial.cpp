# include <iostream >

3 using namespace std;

5 int main ()

6 {

7 short number ;

8 cout << " Enter a number : ";

9 cin >> number ;

11 cout << "The factorial of " << number << " is ";

12 int accumulator = 1;

13 for (; number > 0; accumulator *= number --);

14 cout << accumulator << ".\n";

16 return 0;

17 }