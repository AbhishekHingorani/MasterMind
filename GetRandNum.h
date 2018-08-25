#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int getCodeTwo()
{
	ifstream two;
	srand(time(NULL));
	int y;
	
	two.open("codeTwo.txt");
	two.seekg(((rand()%30)*4),ios::beg);
	two>>y;
	
	two.close();
	return y;
}

int getCodeThree()
{
	ifstream three;
	srand(time(NULL));
	int y, choose;
	choose=rand() % 3;
	three.open("codeThree.txt");
	
 	if(choose==1)
	{
		three.seekg(((rand()%120)*5),ios::beg);
	}

 	if(choose==2)
	{
		three.seekg(((rand()%120)*5),ios::cur);
	}

	if(choose==0)
	{
		three.seekg(-((rand()%120)*5),ios::end);
	}
	three>>y;
	three.close();
	return y;
}

int getCodeFour()
{
	ifstream four;
	srand(time(NULL));
	int y, choose;
	choose=rand()%3;
	four.open("codeFour.txt");
	
 	if(choose==1)
	{
		four.seekg(((rand()%360)*6),ios::beg);
	}

 	if(choose==2)
	{
		four.seekg(((rand()%360)*6),ios::cur);
	}

	if(choose==0)
	{
		four.seekg(-((rand()%360)*6),ios::end);
	}
	
	four>>y;
	four.close();
	return y;
}

int getCodeFive()
{
	ifstream five;
	srand(time(NULL));
	int y, choose;
	choose=rand()%3;
	five.open("codeFive.txt");
	
	if(choose==1)
	{
		five.seekg(((rand()%720)*7),ios::beg);
	}

 	if(choose==2)
	{
		five.seekg(((rand()%720)*7),ios::cur);
	}

	if(choose==0)
	{
		five.seekg(-((rand()%720)*7),ios::end);
	}
	
	five>>y;
	five.close();
	return y;
}

int getCodeSix()
{
	ifstream six;
	srand(time(NULL));
	int y, choose;
	choose=rand()%3;
	six.open("codeSix.txt");

	if(choose==1)
	{
		six.seekg(((rand()%720)*8),ios::beg);
	}
	
 	if(choose==2)
	{
		six.seekg(((rand()%720)*8),ios::cur);
	}
	
	if(choose==0)
	{
		six.seekg(-((rand()%720)*8),ios::end);
	}

	six>>y;
	six.close();
	return y;
}
