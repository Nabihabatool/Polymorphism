#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Cube{
	private:
		
	double length;
    double width;
    double height;
    
    public:
    	Cube(){
    		
    		cout<<"Default Constructor"<<endl;
		}
     Cube (double len, double wid, double hei){
     	
     	len=length;
     	wid=width;
     	hei=height;
     	
	 }
  
    Cube operator +(Cube &le){
        Cube l;
    	l.length=length+le.length;
    	Cube temp(l);
    	return l;
    	
	}
    Cube  operator - (Cube &he){
    	Cube h;
    	h.height=height-he.height;
    	Cube temp(h);
    	return h;
	}
    Cube  operator * (Cube &we){
    	Cube w;
    	w.width=width=we.width;
    	Cube temp(w);
    	return w;
	}
    Cube  operator / (Cube &leg){
    	Cube le;
    	le.length=length/leg.length;
    	Cube temp(le);
    	return le;
	}
    void  operator = (Cube &heg){
    	return((length=heg.length&&height=heg.height&&width=heg.width))
	}
    bool operator == (Cube &weg){
    	
    	return ((width==weg.width&&length==weg.length&&height==weg.height));
    	
    	
	}
    
      void display() {
    	cout<<"Length is:"<<length;
    	cin>>length;
    	cout<<"Width is:"<<width;
    	cin>>width;
    	cout<<"Height is:"<<height;
    	cin>>height;
	}

};

int main() {
	cube temp1(5),temp2(10),temp3(20);
	l=temp1+temp2+temp3;
	h=temp1-temp2-temp3;
	w=temp1*temp2*temp3;
	le=temp1/temp2/temp3;
	he=temp1=temp2=temp3;
	we=temp1==temp2;
	
	
	 

	
	return 0;
}
