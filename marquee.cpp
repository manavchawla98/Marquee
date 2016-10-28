#include <iostream>
#include <stdlib.h> 
#include <curses.h>// use curses.h for system("clear")

using namespace std;

int main()
{
    char a[9]="!ECE150!";
    int j,m;
    int rotations;
    cout << "Enter number of rotations: ";
    cin >> rotations;
    for(int n=1; n<=rotations; n++)
    {
    for(int i=0; i<61; i++)
    {
    	cout << "============================================================" << endl;
    	
    	if(i>52)
    	{
    		for(int k=60-i; k<8; k++)
    			cout << a[k];

    		m=52;

    		while(m)
    		{
    			cout << " ";
    			m--;
    		}
    		for(int l=0; l<60-i; l++)
    			cout << a[l];
    		cout << endl << "============================================================" << endl;
    		system("clear");

    	}

    	else 
    	{
    		j=i;
    	while(j)
    	{
    		cout << " ";
    		j--;
    	}
    		for(int b=0; b<8; b++)
    		{
    			cout << a[b];
    		}

    		cout << endl << "============================================================" << endl;
    		system("clear");
    	}



    }
}


}