//GROUP MEMBER : 19 - Abhishek Hingorani
//               51 - Archan Ranade
//CLASS        : SYiMCA, SEM 3
//DSA and OOCP Project

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include "GuessNum.h"
#include "GetRandNum.h"
#include "GraphicalFunctions.h"
#include "AllOtherFunctions.h"
using namespace std;

int main(int argc, char** argv) 
{
	MaximizeWindow();
	checkFileExistence();
	int num,ques[6], difficulty,p=0;
	char again, menuChoice, *diff=new char[2];
	strcpy(diff,"");
	
	here:
	beautify();
	menuChoice = menu();
	
	switch(menuChoice)
	{
		case '1':{
			goto a;
			break;
		}
		
		case '2':{
			system("cls");
			beautify();
			gotoxy(54,8);
			setColor(0);
			cout<<"\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2   ";
			setColor(4);
			cout<<"RULES   ";
			setColor(0);
			cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n";
			cout<<"\t\t\t\t\t\xB2 You can only enter numbers in the range 1 to 6.\n\n";
			cout<<"\t\t\t\t\t\xB2 Pressing any other key will eat your guess.\n\n";
			cout<<"\t\t\t\t\t\xB2 Oversmartness will result in Failure.\n\n";
			setColor(0);
			gotoxy(54,24);
			getch();
			goto here;
			break;
		}
		
		case '3':{
			system("cls");
			beautify();
			setColor(0); 
			gotoxy(54,8);
			cout<<"\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  ";
			setColor(4);
			cout<<"HOW TO PLAY  ";
			setColor(0);
			cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n";
			cout<<"\t\t\t\t\t\xB2 You will have to guess a code.\n\n";
			cout<<"\t\t\t\t\t\xB2 It will be of 2,3,4,5 or 6 digits, Depending on\n\n ";
			cout<<"\t\t\t\t\t  the difficulty level you choose.\n\n";
			cout<<"\t\t\t\t\t\xB2 It will be made of only 1-6 numbers.\n\n";
			cout<<"\t\t\t\t\t\xb2 The code will not have repitation of digits.\n\n";
			cout<<"\t\t\t\t\t\xB2 That's the most I can help you.\n\n";
			setColor(0);
			getch();
			gotoxy(54,24);
			goto here;
			break;
		}
		
		case '4':{
			system("cls");
			beautify();
			cout<<"\n\n\nEXIT";
			return 0;
			break;
		}
		
		default:{
			system("cls");
			beautify();
			cout<<"\n\n\nENTER VALID CHOICE !";
			getch();
			goto here;
		}
	}
	
	a:
	system("cls");
	
	beautify();
	diff = setDifficulty();
	
	switch(*(diff+0))
	{
		case '1': num=getCodeTwo();
				break;
		case '2': num=getCodeThree();
				break;
		case '3': num=getCodeFour();
				break;
		case '4': num=getCodeFive();
				break;
		case '5': num=getCodeSix();
				break;
		case 8:{
			goto here;
			break;
		}		
		default:{
			system("cls");
			beautify();
			cout<<"\n\n\nENTER VALID CHOICE !";
			getch();
			goto a;
		}
	}
	//num=4632;
	
	difficulty=atoi((diff+p));
	//sscanf(diff,"%d",&difficulty);
	//difficulty=diff-'0';
	description(difficulty);
	
	int rem,length=difficulty;
	int temp=num;
	while(num!=0)	
	{
		rem=num%10;
		ques[length] = rem;
		num=num/10;
		length--;
	}
	
	//-------------------------------------------------------------------------------------------
	//GuessNum ob[10];
	int result;
	
	system("cls");
	beautify();
	setColor(0);
	cout<<"\n\n  \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
	setColor(4);
	cout<<" Enter Guesses ";
	setColor(0);
	cout<<"\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2  n\n";
	setColor(0);
	for(int i=3 ; i<30 ; i++)
	{
		gotoxy(64,i);						//for making output look graphically good
		printf("\xdb");
	}
	cout<<"\n";

	for(int i=0;i<127;i++)
		cout<<"\xdb";
	cout<<"\n\n\n\n\n";
	for(int i=0;i<127;i++)
		cout<<"\xdb";
	
	gotoxy(65,5);
	setColor(0);
	cout<<"  \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 ";
	setColor(4);
	cout<<"Result ";
	setColor(0);
	cout<<"\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2  \n\n";
	
	gotoxy(12,7);
	
	int i,j;
	
	for(i=0,j=8;i<10;i++,j+=2)
	{
		GuessNum *ob=new GuessNum();
		
		if(i!=9)
			cout<<endl<<i+1<<".  ";
		else
			cout<<endl<<i+1<<". ";
		
		cout<<"\t";
		
		for(int k=0;k<=difficulty;k++)
			cout<<"   _     ";
		
		ob->getGuess(difficulty,j);
		//cout<<"\t\t num : "<<temp<<"\t\t";
		result = ob->Validation(ques,difficulty,j);
		
		if(result==2)
		{
//			cout<<"\n\n\n;
			//cout<<"\nCOUNT : "<<GuessNum::getCount()<<endl;
			gotoxy(0,32);
			cout<<"\n\t\t\t                                                                               ";
			gotoxy(0,31);
			setColor(4);
			cout<<"\n\n\t\t\t\t\t      Correct Answer, The number is "<<temp<<"\n\n\n";
			setColor(0);
			
			getch();
			there:
			system("cls");
			beautify();
			cout<<"\n\n\n Play Again ? (y/n) : ";
			again=getche();
   			if(again == 'y' || again == 'Y')
			{
				GuessNum::setCount();
				goto a;
			}
			if(again == 'n' || again == 'N')
			{
				system("cls");
				beautify();
				cout<<"\n\n\nBACKING OUT ALREADY ?";
				getch();
				return 0;
			}
			else
			{
				system("cls");
				beautify();
				cout<<"\n\n\nENTER VALID VALUE !";
				getch();
				goto there;
			}
			break;
		}
	}
	
	if(result==1 && i==10)
	{
		gotoxy(0,32);
		cout<<"\n\t\t\t                                                                               ";
		setColor(4);
		gotoxy(0,32);
		cout<<"\t\t\t\t\t  Number of tries finished, The number was "<<temp<<"\n\n"<<"\t\t\t\t\t\tGo home dude you\'re drunk ! -__-"<<"\n";
		setColor(0);
		
		getch();
		hiss:
		system("cls");
		beautify();
		cout<<"\n\n\n Play Again ? (y/n) : ";
		again=getche();
		if(again == 'y' || again == 'Y')
		{
			GuessNum::setCount();
			goto a;
		}
		if(again == 'n' || again == 'N')
		{
			system("cls");
			beautify();
			cout<<"\n\n\nBACKING OUT ALREADY ?";
			getch();
			return 0;
		}
		else
		{
			system("cls");
			beautify();
			cout<<"\n\n\nENTER VALID VALUE !";
			getch();
			goto hiss;
		}
	}
	
	return 0;
}
