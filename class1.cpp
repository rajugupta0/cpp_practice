#include<iostream>
using namespace std;
class Car{
	public:
		int price;
		int model_no;
		char name[20];
		
		void start(){
			cout<<"Grrr......Starting the Car "<<name<<endl;
		}
};

int main()
{Car C;
C.price = 500;
C.model_no = 1001;
C.name[0] ='B' ;
C.name[1] = 'M';
C.name[2] = 'V';
C.name[3] = '\0';
C.start();


return 0;
	
}
