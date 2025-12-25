#include <iostream>
using namespace std;
class Test{
	private:
	int n;
	public:
	Test()
	{
	n=0;	
	}
	void input()
	{
		cout<<"Enter any number";
		cin>>n;
		cout<<endl;
		}	
		void show()
		{
			cout<<"value of n is ="<<n<<endl;
		}
};
int main()
{
	Test*ptr[5];
	 for (int i = 0; i < 5; i++)
        ptr[i] = new Test;
	for(int i=0;i<5;i++)
	ptr [i] ->input();
	for(int i=0;i<5;i++)
	ptr[i]->show();
}
