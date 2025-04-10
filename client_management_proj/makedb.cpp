#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;


string generateKoreanName() {
	vector<string> lastNames = { "김", "이", "박", "최", "정", "조", "강", "윤", "장", "임", "한", "오", "서", "신" };
	vector<string> nameSyllables1 = {
		"지", "서", "하", "도", "민", "태", "예", "유", "시", "건",
		"현", "은", "수", "다", "소", "나", "진", "아", "선", "채"
	};

	vector<string> nameSyllables2 = {
		"민", "윤", "우", "빈", "연", "율", "린", "아", "솔", "현",
		"진", "유", "영", "호", "서", "안", "재", "훈", "슬", "람"
	};
	return lastNames[rand() % lastNames.size()] + nameSyllables1[rand() % nameSyllables1.size()] + nameSyllables2[rand() % nameSyllables2.size()];
}

string generateAddress() {
	vector<string> cities = {
		"서울", "부산", "대구", "인천", "광주", "대전", "울산", "세종",
		"수원", "고양", "성남", "용인", "청주", "천안", "전주", "포항",
		"창원", "김해", "평택", "안산", "안양", "남양주", "화성", "제주"
	};

	vector<string> districts = {
		"중구", "서구", "남구", "북구", "동구", "강남구", "강서구", "송파구", "성동구", "성북구",
		"해운대구", "수성구", "달서구", "유성구", "팔달구", "덕양구", "일산동구", "분당구", "기흥구",
		"흥덕구", "서북구", "덕진구", "진해구", "장유동", "신제주"
	};

	return cities[rand() % cities.size()] + " " + districts[rand() % districts.size()] + " 123-45";
}

string generatePhoneNumber() {
	int second = rand() % 9000 + 1000;
	int third = rand() % 9000 + 1000;
	return "010-" + to_string(second) + "-" + to_string(third);
}

string generateGender() {
	vector<string> gender = {
		"남성", "여성"
	};
	return gender[rand() % gender.size()];
}

string generateHeight() {
	int heightx10 = rand() % (1800 - 1500 + 1) + 1500;
	float height = heightx10 / 10.0;
	return to_string(height);
}

string generateWeight() {
	int weightx10 = rand() % (1000 - 400 + 1) + 400;
	float weight = weightx10 / 10.0;
	return to_string(weight);
}

string calculateBMI(const string& height, const string& weight) {
	float h = stof(height) / 100.0;
	float w = stof(weight);
	float bmi = w / (h * h);
	return to_string(bmi);
}

int main() {
	srand(static_cast<unsigned int>(time(nullptr)));

	ofstream file("client.csv");
	if (!file.is_open()) {
		cerr << "파일 열기 실패!" << endl;
		return 1;
	}

	file << "id,name,age,address,cell phone,gender,height,weight,bmi\n";

	for (int i = 1; i <= 20000; ++i) {
		string name = generateKoreanName();
		int age = rand() % 60 + 20;
		string address = generateAddress();
		string phone = generatePhoneNumber();
		string gender = generateGender();
		string height = generateHeight();
		string weight = generateWeight();
		string bmi = calculateBMI(height, weight);

		file << i << "," << name << "," << age << "," << address << "," << phone << "," << gender << "," << height << "," << weight << "," << bmi << "\n";
	}

	file.close();
	cout << "client.csv 파일이 20,000명 데이터로 생성되었습니다!" << endl;

	return 0;
}
