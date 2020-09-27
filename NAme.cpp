/* Made for Chan by gourav */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int height = 5; 
int width = (2 * height) - 1; 

void printC() 
{ 
    int i, j; 
    for (i = 0; i < height; i++) { 
        cout<<"*"; 
        for (j = 0; j < (height - 1); j++) { 
            if (i == 0 || i == height - 1) 
                cout<<"*"; 
            else
                continue; 
        } 
        cout<<"\n"; 
    } 
} 
void printS() 
{ 
    int i, j; 
    for (i = 0; i < height; i++) { 
        for (j = 0; j < height; j++) { 
            if ((i == 0 || i == height / 2 || i == height - 1)) 
                cout<<"*"; 
            else if (i < height / 2 && j == 0) 
                cout<<"*";
            else if (i > height / 2 
                     && j == height - 1) 
                cout<<"*"; 
            else
                cout<<" "; 
        } 
        cout<<"\n"; 
    } 
} 

int main()
{
	cout<<"Do you want Chandresh( C ) or singh( S ) to be printed\n Enter character   -  ";
	char ch;
	cin>>ch;
	if(ch=='C' || ch=='c')
	  printC() ;
	else if(ch=='s' || ch=='S')
        printS() ;
    else
       cout<<"	  YOU ARE NOT CHAN  ";

return 0;
}
