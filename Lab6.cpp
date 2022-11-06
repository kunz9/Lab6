/*
Dakota Kunz
C++
Due:
Description:
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;
void heading();
void fileinput(int& binum, int i, int& decimal_num, int rem,int num);
void decimal(int& binum, int bi, int rem, int& decimal_num, int i, int num);
int convert(long long binum, int decimal_num, int rem, int i);
void range();
void baddigit();
string readin;
string inputfile = "BinaryIN.dat";


int main()
{
	heading();
	int num = 0;
	int binum = 0; int i = 0;
	int decimal_num = 0; int rem = 0;
	fileinput(binum,i,decimal_num,rem, num);

	return 0;
}

void heading()
{
	cout << setw(20) << "Binary Number" << setw(30) << "Decimal Equivalent\n";
}

void fileinput(int& binum, int i, int& decimal_num, int rem, int num)
{
	ifstream infile;
	infile.open(inputfile);
	if (!infile)
		cout << "Can't Find File";


	string readin;
	while (infile >> binum)
	{
		convert(binum, decimal_num, i, rem);
		cout << setw(15) << binum << setw(30) << convert(binum, decimal_num, i, rem) << endl;
	}
	infile.close();
}

int convert(long long binum, int decimal_num, int rem,int i)
{
	while (binum != 0)
	{
		rem = binum % 10;
		binum /= 10;
		decimal_num += rem * pow(2, i);
		++i;
	}
	return decimal_num;
}


void baddigit(int binum)
{

}

