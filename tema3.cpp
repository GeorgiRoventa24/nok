
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<utility>
#include<cctype>
using namespace std;

template <class T>


class Container{ 
	
	public:
		T container_;
		
	Container(T container_){
		this->container_ = container_;
	}
	  Container(){};
	 ~Container(){};
	
	void set(T input){
		container_ = input;		
	}
	
	T get() const {
		return container_;
	}


};

bool isEven(Container<int> i){
    return ((i.get()%2)==0);
}

ostream& operator << (ostream& cout, const Container<int> &c) {
	cout << c.get();
	return cout;
}

int main(){
	vector<Container<int> > vec ;
	//Container *c = new Container(5);
	//vector<int> a = {1,2,3,4,5,6};
	//vector<int> b(a.size());
	Container<int> ob1, ob2, ob3, ob4, ob5, ob6;
	ob1.set(1);
	ob2.set(2);
	ob3.set(3);
	ob4.set(4);
	ob5.set(5);
    ob5.set(5);
    
	vec.push_back(ob1);
	vec.push_back(ob2);
	vec.push_back(ob3);
	vec.push_back(ob4);
	vec.push_back(ob5);
    vec.push_back(ob5);
    
    cout<< "Vectorul initial: ";
    for (auto i : vec)
		cout << i.get() << " ";
    cout<<endl;
    
	//find_if
	auto it  = find_if(vec.begin(), vec.end(),isEven);
    cout<<"the first even value is: "<< *it <<endl;
    
   //remove_if
    vec.erase(remove_if(vec.begin(), vec.end(), isEven),vec.end()); 
    cout<< "Vectorul dupa stergerea elem pare: ";
    for (auto i : vec)
		cout << i.get() << " ";
    cout<<endl;
	   
	return 0;
}
