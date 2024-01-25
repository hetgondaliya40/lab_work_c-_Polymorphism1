#include<iostream>

using namespace std;

class Demo{
	public :
		int a;
		int b;
		
		
		void set(int a,int b){
			this->a=a;
				this->b=b;
		}
		void get(){
			cout<<"A ="<<a<<endl<<"B = "<<b<<endl;
			
		}	
		Demo operator+(Demo n){
			Demo temp;
			temp.a=this->a+n.a;
			temp.b=this->b+n.b;
			return temp;
			}
			Demo operator-(Demo n){
			Demo temp;
			temp.a=this->a-n.a;
			temp.b=this->b-n.b;
			return temp;
			}
			Demo operator*(Demo n){
			Demo temp;
			temp.a=this->a*n.a;
			temp.b=this->b*n.b;
			return temp;
			}		
};

int main(){
	Demo d1,d2,d3,d4,d5;
	
	d1.set(3,6);
	d1.get();
	d2.set(4,7);
	d2.get();
	d3=d1+d2;
	d3.get();
	d4=d1-d2;
	d4.get();
	d5=d1*d2;
	d5.get();
	
}

