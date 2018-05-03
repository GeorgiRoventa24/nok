
#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<memory>

using namespace std;

template<class T, class U, class Z>
class Watcher{
	private:
		list<SMPtr_<T>> StateMachinesPtr_;
		U messsage_;
		Z relevance_;
		
};

template<class T>
class StateMachine{
	private:
		vector<SM> container_;
};

struct SM{
	string ipRangeStart;
	string ipRangeStop;
	int clients;
};

template<class T>
shared_ptr<StateMachines<T>>SMPtr_;
template<class T>
shared_ptr<const StateMachinesPtr_<T>> SMCPtr_;

template<class T, class U, class Z>
shared_ptr<Watcher<T,U,Z>>watcherPtr_;
shared_ptr<const Watcher<T,U,Z>> watcherCPtr_;

template<class T, class U, class Z>

class Notifier{
  private:
    vector<WatcherCPtr_<T,U,Z>>subscribers_
};

template<class T, class U, class Z>
shared_ptr<Notifier<T,U,Z>> nPtr_;

template<class T, class U, class Z>
shared_ptr<const Notifier<T,U,Z>> ncPtr_;
    


int main(){
    return 0;
}

