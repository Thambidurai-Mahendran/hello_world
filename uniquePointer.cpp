#include<iostream>
#include<memory>
using namespace std;
class Entity
{
	public:
		Entity()
		{
			cout << "Created!!!!" << endl;
			
		}
		~Entity()
		{
			cout << "destroyed !!!!" ;
		}
		void print()
		{
		
		}
};  
int main()
{
	
	
	unique_ptr<Entity> p=make_unique<Entity>();
	p->print();

}
