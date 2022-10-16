#include <iostream>
#include <string>
using namespace std;
template <class T>
void findSecondLargest( T anAry[], int numElm, T &secondLargest, int &loc )
{
	T tmp;
	T tmp2;
	tmp = anAry[ 0 ];
	tmp2 = anAry[ 0 ];
	for( int n = 0; n < numElm; n++ )
	{
		if( anAry[ n ] >= tmp )
		{
			tmp = anAry[ n ];
		}
	}
	for( int n = 0; n < numElm; n++ )
	{
		if( tmp == tmp2 )
		{
			tmp2 = anAry[ n ];
		}
		else
		{
			break;
		}
	}

	for( int n = 0; n < numElm; n++ )
	{
		if( anAry[ n ] == tmp )
		{
			continue;
		}
		else
		{
			if( anAry[ n ] >= tmp2 )
			{
				tmp2 = anAry[ n ];
				loc = n;
			}

		}
	}
	secondLargest = tmp2;
}
int main() {
	int num;
	int intary[ 1000 ] = { 0 };
	double doubleary[ 1000 ];
	string strary[1000];
	int a1;
	double b1;
	string c1;
	int isecondlargest;
	double dsecondlargest;
	string ssecondlargest;
	int numElm;

	string a;
	cin >> num;
	for( int n = 0; n < num; n++ )
	{
		int loc = -1;
		cin >> a;
		if( a == "int" )
		{
			cin >> numElm;
			for( int i = 0; i < numElm; i++ )
			{
				cin >> a1;
				intary[ i ] = a1 ;
			}
			findSecondLargest( intary, numElm, isecondlargest, loc );
			if( loc == -1 )
			{
				cout << "#" << " " << loc;
			}
			else
			{
				cout << isecondlargest << " " << loc;
			}
		}
		if( a == "double" )
		{
			cin >> numElm;
			for( int i = 0; i < numElm; i++ )
			{
				cin >> b1;
				doubleary[ i ] = b1;
			}
			findSecondLargest( doubleary, numElm, dsecondlargest, loc );

			if( loc == -1 )
			{
				cout << "#" << " " << loc;
			}
			else
			{
				cout << dsecondlargest << " " << loc;
			}
		}
		if( a == "string" )
		{
			cin >> numElm;
			for( int i = 0; i < numElm; i++ )
			{
				cin >> c1;
				strary[ i ] = c1;
			}
			findSecondLargest( strary, numElm, ssecondlargest, loc );
			if( loc == -1 )
			{
				cout << "#" << " " << loc;
			}
			else
			{
				cout << ssecondlargest << " " << loc;
			}
		}
	}
}
