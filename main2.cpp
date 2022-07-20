/*
#include <iostream>

int ReadValue()
{
	int x;
	std::cin >> x;
	return x;
}

// 매개변수를 이용해 함수에 값을 넣는게 아니라
// 그냥 입력받아 되돌려주는 것이기 때문에, 매개변수는 없어도된다.

void WriteValue(int x)
{
	std::cout << x << std::endl;
}

int main()
{
	ReadValue();

	int x;
	std::cin >> x;
	WriteValue(x);
}
*/


/*
Test 하는법!

int main()
{
	WriteValue( ReadValue() );
}

*/


// 반환값, 매개변수가 있냐 없느냐를 판단해서
// void 유무, 매개변수 유무를 파악하는 것이 중요하다.

