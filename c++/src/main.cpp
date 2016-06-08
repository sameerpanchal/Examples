#include <iostream>
#include <string.h>

using namespace std;
class linkedlist
{

public:
	struct node
	{
		int iNode_data;
		int *next_addr;
		int *prev_addr;
	};

void traverse_list(struct node *node_ptr)
{
	node_count = 0;
	cout<<"Data Preset in the List\n";
	while(node_ptr->next_addr != NULL)
	{
//		cout<<"Data:"<<node_prt->iNode_data[node_count]<<"- Next_Data:"<<node_ptr->next_addr[node_count]<<endl;
		node_count++;
	}
}
private:
	int node_count;
};

int main()
{
	int *aData = NULL;
	int iData = 0;
	int counter = 0;
	linkedlist::node nodelist;
	linkedlist *nody;
	
	aData = new int[5];
	memset(aData, 0, 5);
	cout << "Enter 5 numbers.\n";
	while(counter < 5)
	{
		if(!(cin>>iData))
		{
			//cout<<"NON-Integer\n";
		}
		else
		{
			//cout<<"Integer\n";
			aData[counter] = iData;
			counter++;
		}
		cin.clear();
		while (cin.get() != '\n') ;
	}
	
	nody->traverse_list(&nodelist);

/*	cout << "Numbers Entered are:\n";
	for ( counter = 0; counter < 5; counter++)
	{
		nodelist.iNode_data = aData[counter];
		nodelist.next_addr = aData+1;
		cout<<"Data:"<<nodelist.iNode_data<<"- Next_Data:"<<nodelist.next_addr[counter]<<endl;
	}
*/	
	return 0;
}
