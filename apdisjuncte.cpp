#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char c[20];
	cout << "c: ";
	cin.getline(c, sizeof(c));

	char t[1000];
	cout << "t: ";
	cin.getline(t, sizeof(t));

	char *p, *rest;
  	p = t;

	do
	{
		p = strstr(p, c); // caut c in t, incepand cu pozitia p

		if (p) // c apare in t pe pozitia p => il sterg
		{ 
			rest = p + strlen(c);
			*p = '\0';
			strcat(t, rest);
		}
	}
	while (p);

	cout << "noul t: " << t;

	return 0;
}

