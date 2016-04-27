# include <iostream >

3 using namespace std;

5 int main ()

6 {

7 int N;

8 cout << " Enter N: ";

9 cin >> N;

10 int acc = 0;

12 // handle the first number separately

13 cin >> acc;

14 int minVal = acc;

15 int maxVal = acc;

17 // then process the rest of the input

18 for(int i = 1; i < N; ++i)

19 {

20 int a;

21 cin >> a;

22 acc += a;

23 if(a < minVal )

24 {

25 minVal = a;

26 }

27 if(a > maxVal )

28 {

29 maxVal = a;

30 }

31 }

33 cout << " Mean : " << ( double )acc /N << "\n";

34 cout << "Max : " << maxVal << "\n";

35 cout << "Min : " << minVal << "\n";

36 cout << " Range : " << ( maxVal - minVal ) << "\n";

38 return 0;

39 }