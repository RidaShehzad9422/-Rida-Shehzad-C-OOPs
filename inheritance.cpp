#include<iostream>
using namespace std;
class Move{
	protected:
		int position;
		public:
			    // Parameterized Constructor
			Move(int p){
			position=p;	
			}
			void forward(){
			position++;	
			}
			void display()
			{
				cout<<position;
				cout<<endl;
				}	
};
class Move2:public Move
{
	public:
		 // Parameterized constructor for derived class
		  Move2(int p) : Move(p) {}
		void backward()
		{
		position --;	
		}
};
int main()
{
	Move2 m(10);
	m.display();
	m.forward();
    m.display();
    m.backward();
    m.display();
}

