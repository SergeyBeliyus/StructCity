#include <iostream>
#include <windows.h>

struct address {
	std::string city;
	std::string street;
	int house;
	int apt;
	int index;
};

void printData(address* data) {
	std::cout << "Город: " << data->city << std::endl;
	std::cout << "Улица: " << data->street << std::endl;
	std::cout << "Номер дома: " << data->house << std::endl;
	std::cout << "Номер квартиры: " << data->apt << std::endl;
	std::cout << "Индекс: " << data->index << std::endl;
	std::cout << std::endl;
}

int main() {
	address first;
	address second;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	first.city = "Москва";
	first.street = "Арбат";
	first.house = 12;
	first.apt = 8;
	first.index = 123456;

	second.city = "Ижевск";
	second.street = "Пушкина";
	second.house = 59;
	second.apt = 143;
	second.index = 953769;

	printData(&first);
	printData(&second);
}