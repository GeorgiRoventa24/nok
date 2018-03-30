
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<utility>
#include<cctype>
using namespace std;
//template <class T>
//template < class T, class Alloc = allocator<T> > class vector; // template
bool isEven(int i){
    return ((i%2)==0);
}
class Container{ 
	
	public:
		int container_;
		
	Container(int container_){
		this->container_ = container_;
	}
	// ~Container();
	
	void set(int input){
		container_ = input;		
	}
	
	int get() {
		return container_;
	}


};

int main(){
	//vector<Container<int> > vec ;
	Container *c = new Container(5);
	vector<int> a = {1,2,3,4,5,6};
	vector<int> b(a.size());

	//find_if
	vector<int>::iterator it  = find_if(a.begin(), a.end(),isEven);
    cout<<"the first even value is: "<< *it <<endl;
    
   //remove_if
   a.erase(remove_if(a.begin(), a.end(), isEven),a.end()); 
        for(int& x : a)
            cout<<x<<" ";
  
	return 0;
}
