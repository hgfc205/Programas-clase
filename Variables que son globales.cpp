#include <iostream>
int g_mode;

void dosomething()
{
	g_mode = 2;
}

int main()
{
	g_mode = 1;
	
	dosomething();
	
	if (g_mode == 1)
		std::cout << "No se detecto ninguna amenaza. \n";
	else
		std::cout << "Lanzamiento de misiles nucleares...3-2-1- Ahora!! \n";
		
	return 0;
}
