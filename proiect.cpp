
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
    struct SM c1, c2;
    c1.ipRangeStart="0";
    c1.ipRangeStop="20";
    c1.clients=2;
    c2.ipRangeStart="20";
    c2.ipRangeStop="40";
    c2.clients=4;
    c3.ipRangeStart="40";
    c3.ipRangeStop="80";
    c3.clients=8;
    StateMachine<int> statemachine;
    statemachine.addInContainer(c1);
    statemachine.addInContainer(c2);
	statemachine.addInContainer(c3);
    statemachine.printContainer();
    
    return 0;
}

