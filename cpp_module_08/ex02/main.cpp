#include <iostream>
#include "mutantstack.cpp"

int main() {
	{
		mutantstack<int> mstack;
		mstack.push(10);
		std::cout << "top = " << mstack.top() << std::endl;
		mstack.push(20);
		std::cout << "top = " << mstack.top() << std::endl;
		mstack.push(30);
		mstack.push(40);
		mstack.push(50);

		mutantstack<int>::iterator it = mstack.begin();
		mutantstack<int>::iterator ite = mstack.end();

		std::cout << "{ ";
		while (it != ite) {
			std::cout << *it << " ";
			++it;
		}
		std::cout << "}" << std::endl;

		mstack.pop();

		it = mstack.begin();
		ite = mstack.end();

		std::cout << "{ ";
		while (it != ite) {
			std::cout << *it << " ";
			++it;
		}
		std::cout << "}" << std::endl;

		std::cout << std::endl;
	}
	{
		mutantstack<int> mstack;
		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);

		mstack.push(0);

		mutantstack<int>::iterator it = mstack.begin();
		mutantstack<int>::iterator ite = mstack.end();
		++it;
		--it;

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
		return 0;
	}
}
