/*
Write a program that uses only two output statements, cout << "#" and cout << "\n",
to produce a pattern of hash symbols shaped like half of a perfect 5 x 5 square (or a
right triangle):
#####
####
###
##
#
*/

#include <iostream>
using namespace std;
int main()
{
	for (int x = 1; x <= 5; x++) {
			for (int i = 1; i <= 6 - x; i++) {

				cout << "#";
			}
		cout << "\n";
	}


	

}
