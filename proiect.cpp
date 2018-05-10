
#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<memory>

using namespace std;


struct SM{
	string ipRangeStart;
	string ipRangeStop;
	int clients;
};

template<class T>
class StateMachine
{
	private:
		vector<SM> container_;
	public:
		//methods
	 	void addInContainer(SM c){
      		container_.push_back(c);
 	   }
 	   
 	   void printContainer(){
 	   		for(SM c:container_){
 	   			cout<< "IpRangeStart: " << c.ipRangeStart<< "\nIpRangeStop: "<< c.ipRangeStop << "\nClients: "<< c.clients<< endl<<endl; 
				}
		}

};
template<class T, class U, class Z>
class Watcher
{
	private:
		list<StateMachine<T>> stateMachinesPtr_;
		U messsage_;
		Z relevance_;
		
};

template<class T, class U, class Z>
shared_ptr<Watcher<T,U,Z>>watcherPtr_;
template<class T, class U, class Z>
shared_ptr<const Watcher<T,U,Z>> watcherCPtr_;




template<class T>
shared_ptr<StateMachine<T>>SMPtr_;
template<class T>
shared_ptr<const StateMachine<T>> SMCPtr_;


template<class T, class U, class Z>
class Notifier
{
  private:
    vector<const Watcher<T,U,Z>>subscribers_;
};

template<class T, class U, class Z>
shared_ptr<Notifier<T,U,Z>> nPtr_;

template<class T, class U, class Z>
shared_ptr<const Notifier<T,U,Z>> ncPtr_;
    


int main(){
   
    
    return 0;
}

