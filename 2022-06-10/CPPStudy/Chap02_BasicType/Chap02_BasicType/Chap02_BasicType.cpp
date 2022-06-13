#include <iostream>

/** 문자열 관련 라이브러리 */
#include <string>
/** 각 자료형의 최대값과 최소값을 알아오기 위한 라이브러리*/
#include <climits>
/** 배열의 사이즈를 가져오기 위한 하이브러리*/
#include <array>

/** C++ 표준 라이브러리(C++ Standard Libaray)를 사용합니다. */
using namespace std;

int main()
{
	/**
	기본 자료형
	bool	: Boolean
	char	: Character
	int		: Integer
	float	: Floating point
	double	: Double floating point

	string(문자열)은 기본 자료형이 아닌 외부 라이브러리입니다.
	#include <string>
	*/

	/**
	아스키 코드 테이블에 따라 각 문자에 해당하는 숫자 (혹은 숫자에 해당하는 문자)를 출력할 수 있습니다.
	https://ko.wikipedia.org/wiki/ASCII
	*/

	cout << "아스키 코드를 숫자로 출력해 봅니다. " << endl;
	cout << "" << endl;

	for (int i = 48; i <= 57; i++) {
		cout << "ASCII Code " << i << " : " << (char)i << endl;
	}

	cout << "" << endl;

	cout << "숫자를 아스키 코드로 출력해 봅니다. " << endl;
	cout << "" << endl;

	char charArr1[] = { '0','1','2','3','3' ,'4' ,'5' ,'6' ,'7' ,'8','9' };
	for (int i = 0; i < size(charArr1); i++) {
		cout << "ASCII Code " << charArr1[i] << (int)charArr1[i] << endl;
	}
	cout << "" << endl;

	cout << "아스키 코드를 대문자로 출력해 봅니다. " << endl;
	cout << "" << endl;

	for (int i = 65; i <= 90; i++) {
		cout << "ASCII Code " << i << " : " << (char)i << endl;
	}

	cout << "" << endl;
	cout << "대문자를 아스키 코드로 출력해 봅니다. " << endl;
	cout << "" << endl;

	char charArr2[]{ 'A','B','C','D','E','F','G','H','I','J','K'
					,'L','M','N','O','P','Q','R','S','T','U','V'
					,'W','X','Y','Z' };

	for (int i = 0; i < size(charArr2); i++) {
		cout << "ASCII Code " << charArr2[i] << " : " << (int)charArr2[i] << endl;
	}
	cout << "" << endl;

	cout << "아스키 코드를 소문자로 출력해 봅니다. " << endl;
	cout << "" << endl;
	for (int i = 97; i <= 122; i++) {
		cout << "ASCII Code " << i << " : " <<(char)i << endl;
	}
	cout << "소분자를 아스키 코드로 출력해 봅니다. " << endl;
	cout << "" << endl;

	char charArr3[]{ 'a','b','c','d','e','f','g','h','i','j','k'
					,'l','m','n','o','p','q','r','s','t','u','v'
					,'w','x','y','z' };

	for (int i = 0; i < size(charArr3); i++)
	{
		cout << "ASCII Code " << charArr3[i] << " : " << (int)charArr3[i] << endl;
	}

	cout << "" << endl;

	int intValue1 = 'A';
	/** 문자 타입에 해당하는 아스키 코드 값이 출력됩니다. */
	cout << "intValue1 : " << intValue1 << endl;
	/** 아스키 코드값을 문자 타입으로 명시적 형변환 해서 출력합니다. */
	cout << "(char)intValue1 : " << (char)intValue1 << endl;
	cout << "" << endl;

	char charValue1 = 72;
	/** 아스키 코드값에 해당하는 문자 타입으로 출력합니다. */
	cout << "charValue1 : " << charValue1 << endl;
	/** 문자 타입을 정수 값을 ㅗ명시적 형변환해서 문자 타입에 해당하는 아스키 코드값이 출력됩니다. */
	cout << "(int)charValue1 : " << (int)charValue1 << endl;
	cout << "" << endl;

	/**
	정수형 자료형
	int				: 가장기본이 되는 정수형, 4byte입니다.
	signed int		: signed는 부호가 있다는 것을 의미합니다.
						signed 자료형은 음수, 0, 양수를 저장할 수 있는 정수 자료형입니다.
	unsigned int	: 부호가 없는 정수를 저장하는 unsigned 자료형은
						0과 양수만을 저장할 수 있는 정수 자료형입니다.
	short int		: int형보다 작거나 같은 경우, 2byte입니다.
	long int		: int형보다 크거나 같은 경우, 4byte입니다.
	*/

	/** int 타입의 변수를 선언하고 초기화 해 봅니다. */
	int intValue2 = 1;
	cout << "intValue2 : " << intValue2 << endl;
	
	int intValue3(2);
	cout << "intValue3 : " << intValue3 << endl;

	int intValue4 = {3};
	cout << "intValue4 : " << intValue4 << endl;

	int intValue5{4};
	cout << "intValue5 : " << intValue5 << endl;
	
	cout << "" << endl;

	/**
	Boolean 타입
	삼항 연산자		조건 ? A문장 : B문장, 조건에 맞으면 A문장이 실행되고, 조건에 맞지 않으면 B문장이 실행됩니다.
	*/
	bool boolValue1 = true;
	cout << "boolValue1 : " << boolValue1 << endl;
	cout << "boolValue1 : " << (boolValue1 ? 1 : 0) << endl;
	cout << "boolValue1 : " << (boolValue1 ? "true" : "false") << endl;

	bool boolValue2 = false;
	cout << "boolValue2 : " << boolValue2 << endl;
	cout << "boolValue2 : " << (boolValue2 ? 1 : 0) << endl;
	cout << "boolValue2 : " << (boolValue2 ? "true" : "false") << endl;
}
