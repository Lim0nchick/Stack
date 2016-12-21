#include "stack.hpp"
#include <iostream>
int main()
{
	try
  {
		stack<int> st1;
		st1.push(1);
		st1.push(2);
		st1.push(3);
		st1.push(4);
		st1.push(5);
	
		st1.print_stack();
		st1.pop();
		st1.print_stack();
	}
	catch (std::underflow_error& err) 
	{
		std::cout << err.what();
	}
	return 0;
}
