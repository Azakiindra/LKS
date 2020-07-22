#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main(){

	system("cls");
	int FillArray, temp = 0,i,j;
	char CheckCondition;
	bool TryAgain = true;

	//Get Length Array
	cout << "First time, please input length of Array\nLength Array :";
	cin >> FillArray;
	int MyArray[FillArray];
	//

	//Random Array
	for (int i = 0; i < FillArray; i++)
	{
		MyArray[i] = rand() % 100;
	}
	//

	while (TryAgain == true)
	{
		system("cls");
		int MySelection;
		cout << "1. Change Length Array\n2. Input Array\n3. view Array\n4. Bubble Sort\n5. Random Value Array\n6. Exit\n>> ";
		cin >> MySelection;

		//Change Length Array
		if (MySelection == 1)
		{

			system("cls");

			cout << "Enter Length Array\n>>";
			cin >> FillArray;
			MyArray[FillArray];
			cout << "\nDone";

			_getch();
			system("cls");

		}
		//

		//Input Array
		else if (MySelection == 2)
		{
			system("cls");
			cout << "Input Array\n";
			for(int i = 0; i < FillArray; i++){
				cout << "\nArray Index [" << i << "] : ";
				cin >> MyArray[i];
			}

			system("cls");
		}
		//

		//View Array
		else if (MySelection == 3)
		{
			system("cls");
			cout << "View Array\n\n";
			for(int i = 0; i < FillArray; i++){
				cout << "Array[" << i << "] : " << MyArray[i] << endl;
			};

			_getch();
			system("cls");
		
		}
		//

		//Bubble Sorting Algoritm
		else if (MySelection == 4)
		{
			//
			cout << "Belum Di Sorting :\n";
    		for(int a=0; a<FillArray; a++){
        		cout<<"array ke-"<<a<<":"<<MyArray[a]<<endl;
    		}
    
    		cout<<"\n\nSetelah Di Sorting :\n";
    
    		for(i=0; i<FillArray-1; i ++){
        		for(j=0; j<FillArray-i-1; j++){
            		if(MyArray[j]>MyArray[j+1]){
                		temp = MyArray[j];
                		MyArray[j] = MyArray[j+1];
                		MyArray[j+1] = temp;
            		}
        		}
    		}
    		for(int a=0; a<FillArray; a++){
        		cout<<"array ke-"<<a<<":"<<MyArray[a]<<endl;
    		}

			_getch();
			system("cls");
		}
		//

		//Random Array
		else if (MySelection == 5)
		{

			for (int i = 0; i < FillArray; i++)
			{
				MyArray[i] = rand() % 100;
			}

		}
		//

		//Exit
		else if (MySelection == 6)
		{
			TryAgain = false;
		}
		//
		
		else
		{
			TryAgain = false;
		}
			
	}	
}