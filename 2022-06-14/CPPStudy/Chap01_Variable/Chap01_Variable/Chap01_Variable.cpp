#include <iostream>

/** 문자열 관련 라이브러리를 추가 합ㅋ니다. */
#include <string>

/** C++ 표준 라이브러리(C++ Standard Library)를 사용합니다/.*/
using namespace std;

int main()
{
	/**
	여러분들의 미래를 위해서는 당장 요거하시면 좋습니다.
	1. C++ 하셔야 합니다.
	2. 언리얼 엔진 하셔야 합니다.
	3. 영어나 중국어 하나 하시면 좋습니다.

	어려분들이 취업을 하시면
	1. Python하셔야 합니다. 굴찍굴찍한 프로그램들(그래픽 프로그램, 게임엔진) 파이썬을 모무 지원합니다.
		나중을 위해서 보험용으로 파이썬을 합니다.\
		초등학교떄부터 코딩교육을 합니다. 파이썬으로 합니다.
	2. 구글플레이에 서비스 하려면 Java, Go(구글에서 미는 언어입니다. ).  Android 공부해야 합니다.
	3. 애플 앱스토어에 서비스 하려면 Swift 해야 합니다.
	4. 웹쪽(Frond-End, Back_End), jacascript, html5
	5. 데이터베이스 : 큰회사(Oracle-java), 제법 큰 회사(MS-Sql, C++, C#), 보통회사(MySql, mariaDB)
	6. 서버쪽 : C++, C#, Python, 서버쪽 언어들 많습니다.
	7. 유니티 해야 합니다.
	
	취업을 하고 여유가 생긴다면
	1. 유럽쪽으로 가고 싶으시면 독일어 하시면 좋습니다.
	2. 중동쪽 가고 싶으시면 이랍어 하시면 좋습니다.
	*/

	/**
	변수랑 무엇인가?

	변수란 무엇인가에 대해서 알아보기전에 몇가지 자료형에 대해서 알아봅니다.

	int(integer, 인티져)라는 자료형이 있습니다. 정수 값을 저장할 수 있는 자료형입니다.
	1. 1024, 2048과 같은 정수 값을 저장할 수 있는 자료형입니다.

	float(플로트)라는 자료형이 있습니다. 실수 값을 저장할 수 있는 자료형입니다.
	3.14, 2.536, 1.414와 같은 실수 값을 저장할 수 있는 자료형입니다.

	보통 C++책에는 float보다 정밀도가 더 높은 double타입을 많이 씁니다.
	게임은 정밀도를 코딩하는 것이 아니라 재미를 코딩합니다.

	string(스트링)이라는 자료형이 있습니다. 문자열을 저장할 수 있는 자료형입니다.
	"대한민국", "나, 너 사랑해", "우리 지금 놀어 왔어요"등과 같은 어느 문자열이든
	저장할 수 있는 자료형입니다.

	http://kor.pe.kr/util/4/charmap.htm
	위 주소에 가보면 특수 문자 리스트를 볼 수 있습니다.

	특수 문자도 가능합니다.
	“나 너 ♥ !!”, “◁ ◀ ▷ ▶ ♤ ♠ ♡ ♥ ♧ ♣ ⊙ ◈ ▣ ◐ ◑ ♨ ☏ ☎ ☜ ♩ ♪ ♬ ㉿ ㈜”
	당연히 특수 문자도 문자에 포함 될 테니 문자열로 표현이 가능한 것이죠.
	*/

	/**
	이제 본격적으로 변수란 무엇인가에 대해서 알아 봅니다.

	변수는 프로그램이 사용하는 데이터를 일시적으로 저장하는 목적으로 사용하는 메모리 공간입니다.
	변수는 우리가 자료형에 이름을 붙여 준 것입니다.
	이름을 붙여 준다는 얘기는 붙인 사람 마음대로 입니다.

	하지만 변수의 규칙에는 약간의 규칙이 있습니다.
	*/

	/**
	1. 첫 번쨰 규칙은 변수의 이름에는 숫자, 영문자, 특수 문자로_(Underscore)가 쓰일수 있습니다.

	2. 두 번째 규칙은 영문자로 쓸 경우 소문자로 씁니다. 꼭 소문자로 써야 하는 것은 아니지만 관례입니다.
		영문자로 쓸 경우 대문자와 소문자를 가립니다. 예를 들어서 apple와 Apple는 다른 변수입니다.

	3. 세 번째는 숫자로 시작해서는 안됩니다.

	4. 네 번째 규칙은 키워드를 사용해서 변수 이름을 선언하면 안됩니다.

	5. 마지막으로 특수 문자인 _(Underscore)로 변수의 이름을 시작할 수 있습니다.
	*/

	/**
	C++은 자체 사용을 위해 C++ 17 기준으로 84개 단어를 예약해 놓았습니다. 이러한 단어를 키워드(keyword)라고 합니다.

	alignas, alignof, and, and_eq, asm, auto, bitand, bitor, bool, break, case, catch,
	char, char16_t, char32_t, class, compl, const, constexpr, const_cast, continue, decltype, default, delete,
	do, double, dynamic_cast, else, enum, explicit, export, extern, false, float, for, friend
	goto, if, inline, int, long, mutable, namespace, new, noexcept, not, not_eq, nullptr,
	operator, or, or_eq, private, protected, public, register, reinterpret_cast, return, shrot, signed, sizeof,
	static, static_assert, static_cast, struct, switch, template, this, thread_local, throw, true, try, typedef,
	typeid, typename, union, unsigned, using, virtual, void, volatile, wchar_t, while, xor, xor_eq
	*/

	/** 그럼 이제 자료형에 이름을 지어 보도록 하겠습니다. 변수를 선언하는 것입니다. */

	/** 변수의 이름이 길기는 하지만 상관없습니다. */
	int thisIsMyFirstVariable;

	/**
	변수의 이름으로 강관은 없지만 a라는 변수의 이름은 직관성이 떨어지고 어떤 의미의
	변수인지 알아보기 불편합니다.
	변수나 함수, 클래스의 이름을 지을때는 고민을 많이 합니다. 이름만 보더라도
	어떤 의미의 변수인지, 함수인지, 클래스 이름인지를 알 수 있도록 고민을 해야 합니다.
	*/
	int a;

	/** 숫자로 시작하니 변수의 이름으로 쓸 수 없습니다. 또한 에러가 납니다. */
	//int 1Score; // (X)

	/** 변수의 이름에 한글을 쓰면 안됩니다. 에러는 안나지만 안됩니다. */
	int 스코어;

	/**
	변수의 이름은 _(Underscore)로 시작할 수 있습니다.
	멤버 변수는 변수 이름만 보더라도 멤버 변수인 것을 알 수 있도록
	변수 이름 앞에 m, m_, _를 붙여 주곤 합니다.
	*/
	int _ThisIsMySecondVariable;

	/**
	코드를 작성할 경우에는 꼭 마지막에 ;(세미클론)을 찍어서 문장이 끝났다는 것을
	비주얼 스튜디오에게 알려 주어야 합니다.

	코드를 작성하면 꼭 빌드를 해 주어야지 반영이 됩니다.
	만일 오타나 에러가 있는 경우 빌드 도중에 비주얼 스튜디오가 어디에 에러가 있다고 알려 줍니다.
	비주얼 스튜디오는 에러가 나는 곳을 라인 번호로 알려줍니다.

	*/

	/** 문장을 추가해 줍니다. * /
	/** int타입의 intValue1이라는 이름의 변수를 선언했습니다. */
	int intValue1;
	/** float타입의 floatValue1이라는 이름의 변수를 선언했습니다.*/
	float floatValue1;
	/** double타입의 doubleValue1이라는 이름의 변수를 선언했습니다. */
	double doubleValue1;
	/** char타입의 charValue1이라는 이름의 변수를 선언했습니다. */
	char charValue1;
	/** string타입의 stringValue1이라는 이름의 변수를 선언했습니다. */
	/** 문자열을 쓰기 위해서는 #include <string> 해 주어야 합니다. */
	string stringValue1;


	/** 이제 우리가 만든 변수에 값을 변경해 보도록 합니다. */
	intValue1 = 1024;
	cout << "intValue1 : " << intValue1 << endl; // endl : endLine;
	cout << "" << endl; // 결과가 너무 붙어있으면 답답 합니다. 공백을 추가해 줍니다.

	/**
	제대로 결과값이 보입니다. 코드를 보니 궁금한 것이 하나 보입니다.
	float 타입의 변수에 값을 줄 때는 뒤에 "f" 를 붙이는 것입니다.

	intValue1변수의 값이 2048이고 flaotValue1변수의 값이 2048이면, 2048이라는 값만 볼 떄는
	정수인지, 실수인지 구분이 안갈 수 있습니다.

	그래서 실수인 경우는 끝에 대문자 "F". 소문자 "f"를 붙여서 구분을 해 줍니다.
	어는 것을 쓰던지 강관은 없지만 보통 소문자 "f"를 씁니다.
	*/
	floatValue1 = 3.14159265f;
	cout << "floatValue1 : " << floatValue1 << endl;
	cout << "" << endl;

	/** 
	double타입은 값 뒤에 float타입처럼 문자가 없습니다. 
	float타입과 double타입의 차이점은 정밀도의 차이입니다.
	*/
	doubleValue1 = 3.14159265;
	cout << "doubleValue1 : " << doubleValue1 << endl;
	cout << "" << endl;

	/** char(문자)타입은 작은 따옴표('') 안에 값을 넣습니다. */
	charValue1 = 'a';
	cout << "charValue1 : " << charValue1 << endl;
	cout << "" << endl;

	/** string(문자열)타입은 큰따옴표("") 안에 값을 넣습니다. */
	stringValue1 = "C와 C++ 공부하고 있어요. !!";
	cout << "stringValue1 : " << stringValue1 << endl;
	cout << "" << endl;

	/**
	변수를 선언할 떄 같은 타입이라면 한줄에 변수를 선언할 수도 있습니다.
	하지만 안좋은 습관입니다. 각각 따로 해주시는 것이 좋은 습관입니다.
	*/
	// int intValue2, intValue3; // (X) 안좋은 습관입니다.
	int intValue2;
	int intValue3;

	/**
	native C++	: main()
	Unity C#	: Start()
	Unreal C++	: BefinPlay()

	우리가 함수를 만들게 되면 호출하지 않으면 함수를 쓸 수 없습니다.
	하지만 main() 함수는 우리가 호출하지 않아도 자동으로 호출되는 이벤트 함수입니다.
	그렇기 때문에 게임을 분석할 때 main() 함수부터 분석을 합니다. 게임의 시작입니다.
	*/
}