# include <iostream >

3 using namespace std;

5 int main ()

6 {

7 while (1)

8 {

9 int N;

10 cin >> N;

11 cout << ((N % 5 == 0 && N >= 0) ? N/5 : -1) << "\n";

12 }

13 return 0;

14 }