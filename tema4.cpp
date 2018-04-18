//tema o functie: templatizata variadic care gaseste maximul din n elemente

#include<iostream>

using namespace std;
//iterativ
template<class Arg, class ... Args>
auto max(Arg arg, Args ... args) -> Arg
{	
	Arg max_ = arg;
	for (auto it : { args ... })
	{
		if (it > max_)
		{
			max_ = it;
		}
	}
	return max_;
};


int main() {

	cout << max(2, 4, 1, 10, 20, 5);

	cin.get();

	system("pause");

	return 0;
}
