#include <cstring>
class GuessNum
{
	int guess[6];
	char *guess111;
	GuessNum *next;
	static int count;
	public :
		void getGuess(int length,int line);
		int Validation(int ques[],int n,int line);
		void ColorResult(int,int,int,int,int);
		GuessNum()
		{
			count++;
			guess111=new char[10];
			strcpy(guess111,"");
			for(int i=0;i<6;i++)
				guess[i]=0;
		}
		static int getCount(){return count;}
		static void setCount(){count=0;}
};
int GuessNum::count;
