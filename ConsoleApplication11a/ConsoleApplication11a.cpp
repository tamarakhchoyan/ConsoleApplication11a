#include <iostream>
int main()
{
	unsigned int x1, y1;
	unsigned int x2, y2;
	std::cin >> x1 >> y1;
	std::cin >> x2 >> y2;
if(((x1+x2)%2==0 && (y1+y2)%2==0) || ((x1+x2)%2==1 && (y1+y2)%2==1))
    {
		std::cout << "YES";
	}
	else { std::cout << "NO"; }
	return 0;
}