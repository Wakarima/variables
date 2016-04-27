# include <iostream >

3 using namespace std;

5 int main ()

6 {

7 int N;

8 cin >> N;

9 for(int i = 2; N > 0; ++i)

10 {

11 bool isPrime = true ;

12 for (int j = 2; j < i; ++j)

13 {

14 if(i % j == 0)

15 {

16 isPrime = false ;

17 break ;

18 }

19 }

20 if( isPrime )

21 {

22 --N;

23 cout << i << "\n";

24 }

25 }

26 return 0;

27 }