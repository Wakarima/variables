# include <iostream >

3 using namespace std;

5 long long accumulator = 1;

7 int main ()

8 {

9 int number ;

10 cout << " Enter a number : ";

11 cin >> number ;

12 if( number < 0)

13 {

14 cout << "No negative numbers allowed !\n";

15 return 1;

16 }

17 if( number > 20)

18 {

19 cout << " Program will not produce correct result !\n";

20 }

21 for (; number > 0; accumulator *= number --);

22 cout << "The factorial of " << number << " is " << accumulator

23 return 0;

24 }