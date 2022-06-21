#include <iostream>
/** 문자열 관련 라이브러리*/
#include <string>
/** 배열의 사이즈를 가져오기 위한 라이브러리*/
#include <array>


/** C++ 표준 라이브러리 사용합니다. */
using namespace std;

/** 테스트를 위해서 EAnimal이라는 이름의 열거형을 정의해 줍니다. */

enum EAnimal {

	/**
	열거자(Enumerator, 이뉴머래이터)
	각 열거자는 세미콜론(;)이 아니라 쉼표(,)로 구분됩니다.
	열거자는 내부적으로 정수값입니다.
	열거형은 초기화를 하지않으면 0부터 시작합니다.
	*/
	Lion,		// 0
	Tiger,		// 1
	Elephant,	// 2
	Dog,		// 3
	Cat,		// 4
	Eagle,		// 5
	MaxAnimal,	// 6	열거자의 요소수를 알기 위한
};/** enum 자체는 ; (세미콜론)으로 끝내야 합니다. */

/** 테스트를 위해 EItem이라는 이름의 열거형을 정의해 줍니다. */
enum EItem {
	/**
	초기화를 하게 되면 다음과 같이 값을 지정해 줄 수 있습니다.
	그 이후의 원소들은 값이 1씩 증가해서 자동적으로 설정됩니다.
	*/
	DailyItem = -3,
	WeeklyItem,		// -2
	GamemoneyItem,	// -1
	GoldItem = 7,
	CashItem = 7,
	VIPItem,		//	8
	MaxItem = 6,	//	9	열거형의 요소수를 지금은 알 수 없습니다.
};
class TestClass {
public:
	EAnimal lion = EAnimal::Lion;
	EAnimal tiger = EAnimal::Tiger;
	// EAnimal tiger(EAnimal::Tiger);
	EAnimal elephant{ EAnimal::Elephant };
	// TestEnum // main함수 안에있기 때문에 외부에서 접근 불가능합니다.
};

struct MyStruct
{
	EAnimal lion = EAnimal::Lion;
};

int main()
{
	/**
	무언가 구분할 일이 있다면 열거형을 정의해서 사용합니다.
	열거형은 내부적으로는 정수값이지만 외부로 보이기에는 문자열이라서 가독성이 좋습니다.
	또한 내부적으로 정수값이라서 값을 비교할 때 빠릅니다. 
	게임에서 아이템구분, 몬스터 구분, 플레이어 직업 구분, 스테이지 구분등
	구분할 필요가있는 것들은 모두 열거형을 사용합니다.
	*/

	/** 테스트를 위해서 EAnimal이라는 이름의 열거형을 정의해 줍니다. */
	
	/** 문장을 추가해 줍니다. */
	EAnimal lion = EAnimal::Lion;
	EAnimal tiger(EAnimal::Tiger);
	EAnimal elephant{ EAnimal::Elephant };

	cout << "lion : " << lion << endl;
	cout << "tiger : " << tiger << endl;
	cout << "elephant : " << elephant << endl;

	cout << "" << endl;

	/**
	열거형의 값을 명시적으로 정의할 수 있습니다.
	이런한 정수 값은 양 또는 음의 값일 수 있으며 다른 열거형과 같은 값을 공유할 수 있습니다.
	정의되지 않는 모든 열거형은 이전 열거형보다 1 더 큰 값이 부여 됩니다.
	*/

	/** 테스트를 위해 EItem이라는 이름의 열거형을 정의해 줍니다. */

	/** 
	열거형 변수는 정수 변수에 할당할 수 있습니다.
	문장을 추가해 줍니다. 
	*/
	int dailyItem = EItem::DailyItem;
	int weeklyItem = EItem::WeeklyItem;
	int gameMoneyItem = EItem::GamemoneyItem;
	int goldItem = EItem::GoldItem;
	int cashItem = EItem::CashItem;
	int vipItem = EItem::VIPItem;

	cout << "dailyItem : " << dailyItem << endl;
	cout << "weeklyItem : " << weeklyItem << endl;
	cout << "gameMoneyItem : " << gameMoneyItem << endl;
	cout << "goldItem : " << goldItem << endl;
	cout << "cashItem : " << cashItem << endl;
	cout << "vipItem : " << vipItem << endl;

	cout << "" << endl;

	/** 열거형 요소의 소속을 표시하지 않아도 됩니다. */

	cout << "EItem::DailyItem : " << EItem::DailyItem << endl;
	cout << "EItem::WeeklyItem : " << EItem::WeeklyItem << endl;
	cout << "EItem::GamemoneyItem : " << EItem::GamemoneyItem << endl;
	cout << "EItem::GoldItem : " << EItem::GoldItem << endl;
	cout << "EItem::CashItem : " << EItem::CashItem << endl;
	cout << "EItem::VIPItem : " << EItem::VIPItem << endl;

	cout << "DailyItem : " << DailyItem << endl;
	cout << "WeeklyItem : " << WeeklyItem << endl;
	cout << "GamemoneyItem : " << GamemoneyItem << endl;
	cout << "GoldItem : " << GoldItem << endl;
	cout << "CashItem : " << CashItem << endl;
	cout << "VIPItem : " << VIPItem << endl;
}