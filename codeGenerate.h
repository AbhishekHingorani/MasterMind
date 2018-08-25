int a, b, c, d, e, f;
int *flag;

void codeSix()
{
	flag=new int[720];
	int ch=0, line=1;
	ofstream six;
	six.open("codeSix.txt");
	
	for(a=1;a<=6;a++)
	{
		for(b=1;b<=6;b++)
		{
			for(c=1;c<=6;c++)
			{
				for(d=1;d<=6;d++)
				{
					for(e=1;e<=6;e++)
					{
						for(f=1;f<=6;f++)
						{
							if(a!=b && a!=c && a!=d && a!=e && a!=f && b!=c && b!=d && b!= e && b!=f && c!=d && c!=e && c!=f && d!=e && d!=f && e!=f)
							{
								flag[ch]=((a*100000) + (b*10000) + (c*1000) + (d*100) + (e*10) + f);
								if(line<=719)
								{
									six<<flag[ch]<<endl;
									line++;
								}
								else
									six<<flag[ch];	
								ch++;
							}
						}
					}
				}
			}
		}
	}

	delete flag;
	six.close();
	return;
}

void codeFive()
{
	flag=new int[720];
	int ch=0, line=1;
	ofstream five;
	five.open("codeFive.txt");
	
	for(b=1;b<=6;b++)
	{
		for(c=1;c<=6;c++)
		{
			for(d=1;d<=6;d++)
			{
				for(e=1;e<=6;e++)
				{
					for(f=1;f<=6;f++)
					{
						if(b!=c && b!=d && b!= e && b!=f && c!=d && c!=e && c!=f && d!=e && d!=f && e!=f)
						{
							flag[ch]=((b*10000) + (c*1000) + (d*100) + (e*10) + f);
							if(line<=719)
							{
								five<<flag[ch]<<endl;
								line++;
							}
							else
								five<<flag[ch];	
							ch++;
						}
					}
				}
			}
		}
	}

	delete flag;
	five.close();
	return;
}

void codeFour()
{
	flag=new int[360];
	int ch=0, line=1;
	ofstream four;
	four.open("codeFour.txt");
	
	for(c=1;c<=6;c++)
	{
		for(d=1;d<=6;d++)
		{
			for(e=1;e<=6;e++)
			{
				for(f=1;f<=6;f++)
				{
					if(c!=d && c!=e && c!=f && d!=e && d!=f && e!=f)
					{
						flag[ch]=((c*1000) + (d*100) + (e*10) + f);
						if(line<=359)
						{
							four<<flag[ch]<<endl;
							line++;
						}
						else
							four<<flag[ch];	
						ch++;
					}
				}
			}
		}
	}

	delete flag;
	four.close();
	return;
}

void codeThree()
{
	flag=new int[120];
	int ch=0, line=1;
	ofstream three;
	three.open("codeThree.txt");

	for(d=1;d<=6;d++)
	{
		for(e=1;e<=6;e++)
		{
			for(f=1;f<=6;f++)
			{
				if(d!=e && e!=f && d!=f)
				{
					flag[ch]=((d*100) + (e*10) + f);
					if(line<=119)
					{
						three<<flag[ch]<<endl;
						line++;
					}
					else
						three<<flag[ch];
					ch++;
				}
			}
		}
	}

	delete flag;
	three.close();
	return;
}

void codeTwo()
{
	flag=new int[30];
	int ch=0, line=1;
	ofstream two;
	two.open("codeTwo.txt");

	for(e=1;e<=6;e++)
	{
		for(f=1;f<=6;f++)
		{
			if(f!=e)
			{
				flag[ch]=((e*10) + f);
				if(line<=29)
				{
					two<<flag[ch]<<endl;
					line++;
				}
				else
				{
					two<<flag[ch];
				}
				ch++;
			}
		}
	}

	delete flag;
	two.close();
	return;
}

