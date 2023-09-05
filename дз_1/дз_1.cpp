#include <iostream>
using namespace std;

class MAN // ЛЮДИНА
{
public:
	float growth = 170.2;
	string hair_color = "brown";
	string name = "Angelina";
	string gender = "woman";
	int age = 18;
	void Walk()
	{
		cout << "людина ходить..." << endl;
	}
	void Drink(string liquid)
	{
		cout << "людина п'є..." << liquid << endl;
	}
	void Say()
	{
		cout << "людина говорить!" << endl;
	}
	void Laugh()
	{
		cout << "ХА-ХА-ХА!" << endl;
	}
	void Punch()
	{
		cout << "...удар!..." << endl;
	}
};
class ROOM // КІМНАТА
{
public:
	int count_room = 1;
	float height = 3; // m
	float width = 5; //m
	int count_angle = 4;
	string color_wall = "green";
	void TheRoomIsVentilated()
	{
		cout << "кімната провітрюється..." << endl;
	}
	void TheRoomIsCleaned()
	{
		cout << "кфмната прибирається..." << endl;
	}
	void TheRoomIsClosed()
	{
		cout << "кімната замкнута..." << endl;
	}
	void TheRoomIsOpen()
	{
		cout << "кімната відімкнута..." << endl;
	}
	void TheRoomIsNotLit()
	{
		cout << "кімната не освітлюєься..." << endl;
	}
};
class MOBILE_PHONE // МОБІЛЬНИЙ ТЕЛЕФОН
{
public:
	string colot_phone = "white";
	string brand = "iphone";
	bool case_phone = true;
	double prise = 25999; //$
	int count_contact = 32;
	void PhoneCall()
	{
		cout << "мелодія дзвінку..." << endl;
	}
	void Vibration()
	{
		cout << "вібрація..." << endl;
	}
	void TurnOnThePhone()
	{
		cout << "телефон вмикається..." << endl;
	}
	void WatchingVideo()
	{
		cout << "перегляд ютуба..." << endl;
	}
	void Battery(string percent)
	{
		cout << "на тебефоні: " << percent << " %" << endl;
	}
};
class MICROPHONE // МІКРОФОН
{
public:
	string color_micro = "black";
	bool buttom = true;//наявніть кнопки для вмикання мікро
	string brand = "Trust GXT";
	int frequency_range = 5000;
	float cord_length = 1.5;//m
	void IncludeMiro()
	{
		cout << "мікрофон увімкнено..." << endl;
	}
	void TurnOffMiro()
	{
		cout << "мікрофон вимкнено..." << endl;
	}
	void Position()
	{
		cout << "мікрофон стоїть на столі..." << endl;
	}
	void Connection()
	{
		cout << "мікрофон підключен до системи..." << endl;
	}
	void NoConnection()
	{
		cout << "мікрофон не підключен до системи..." << endl;
	}
};
class RACCOON // ЄНОТ
{
public:
	string color_wool = "gray";
	float weight = 5.6; //kg
	string eyes_color = "green";
	string nick = "Stepan";
	string gender = "man";
	void Run()
	{
		cout << "єнот біжить..." << endl;
	}
	void MakeNoize()
	{
		cout << "ГРРР!" << endl;
	}
	void Walk()
	{
		cout << "єнот ходить..." << endl;
	}
	void Eat(string meal)
	{
		cout << "єнот їсть..." << meal << endl;
	}
	void Jump()
	{
		cout << "єнот стрибає..." << endl;
	}
};
int main()
{
	//cout << "Hello World!\n";
}


