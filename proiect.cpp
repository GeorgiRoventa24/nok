
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
	public:
	    Watcher(U m, Z r)
	    {
	        this.messsage_ = m;
	        this.relevance_ = r;
	    }
	    
	    void setMessage(U messsage_)
	    {
	        this.messsage_ = messsage_;
	        
	    }
	    
	    U getMessage()
	    {
	        return this.messsage_;
	    }
	    
	    void setRelevance(Z relevance_)
	    {
	        this.relevance_ = relevance_;
	    }
	    
	    Z getRelevance()
	    {
	        return this.relevance_;
	    }
	    
	    // o functie ce comunica cu StateMachine iar cand se modifica starea StateMachine, Watcher instinteaza pe Notify
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
   
    SM sm1, sm2, sm3;
    StateMachine<int> stateMachineContainer;
    sm1.ipRangeStart = "20";
    sm1.ipRangeStop = "40";
    sm1.clients = 2;
    sm2.ipRangeStart = "40";
    sm2.ipRangeStop = "60";
    sm2.clients = 4;
    sm3.ipRangeStart = "60";
    sm3.ipRangeStop = "80";
    sm3.clients = 10;
    stateMachineContainer.addInContainer(sm1);
    stateMachineContainer.addInContainer(sm2);
    stateMachineContainer.addInContainer(sm3);
    stateMachineContainer.printContainer();
    
    return 0;
}

