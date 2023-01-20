#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class shape{
	private:
		int a;
		
	public:
		void draw(){
	    cout<<"Enter sides:"<<endl;
	    cin>>a; 
	
};

class triangle:public shape{
	public:
	void draw(){
		if(a=3){
			cout<<"This is triangle shape."<<endl;
		else{
			cout<<"Wrong sides";
		}
	}}
};
class square:public shape{
	public:
	void draw(){
		if(a=4){
			cout<<"This is Square shape."<<endl;
			
		}
		else{
			cout<<"Wrong sides";
		}
	}
};
int main() {
	square s1;
	triangle t1;
	s1.draw;
	
	
	return 0;
}
