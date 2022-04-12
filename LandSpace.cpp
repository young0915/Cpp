#include <iostream>

using namespace std;

void doSomething(int x)
{
	x = 123;
	cout << x << endl;  // #2 0 
}


int main()
{
	int x = 0;

	cout << x << endl;  // #1 123 
	doSomething(x);
	cout << x << endl;  // #3 0

	return 0;
}


/*

Load Space
지역변수는 영영ㄱ을 벗어나면 사용할 수 없게 됩니다. 지역 변수가 차지하고 있던
메모리는 그 지역 변수가 영역을 벗어날 떄 '스택'메모로 반납됩니다.
반납된 메모리는 다음 지역 변수가 사용할 수 있도록 대기합니다.




*/