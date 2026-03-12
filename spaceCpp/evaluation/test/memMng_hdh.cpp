
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

class Member
{
private:
	int id;
	string name;
	string phone;
	string email;
public:
	Member(int id, string name, string phone, string email)
	{
		this->id = id;
		this->name = name;
		this->phone = phone;
		this->email = email;
	}
	int getId() { return id; }
	string getName() { return name; }
	string getPhone() { return phone; }
	string getEmail() { return email; }
	void setName(string name) { this->name = name; }
	void setPhone(string phone) { this->phone = phone; }
	void setEmail(string email) { this->email = email; }

	void input() {
		cout << "ID: ";
		cin >> id;
		cout << "Name: ";
		cin >> name;
		cout << "Phone: ";
		cin >> phone;
		cout << "Email: ";
		cin >> email;
	}

	void update() {
		cout << "new ID: ";
		cin >> id;
		cout << "new Name: ";
		cin >> name;
		cout << "new Phone: ";
		cin >> phone;
		cout << "new Email: ";
		cin >> email;
	}

	void print() {
		cout << left << setw(10) << id
			<< left << setw(15) << name
			<< left << setw(15) << phone
			<< left << setw(30) << email << endl;
	}

};

class MemberManager
{
private:
	vector<Member> members;
public:
	void loadFromFile() {
		ifstream inFile("members.txt");
		if (!inFile) {
			cout << "저장된 회원 정보가 없습니다.\n";
			return;
		}
		int id;
		string name, phone, email;
		while (inFile >> id >> name >> phone >> email) {
			Member m(id, name, phone, email);
			members.push_back(m);
		}
		inFile.close();
	}
	bool exists(int id) {
		for (auto& m : members) {
			if (m.getId() == id)return true;
		}
		return false;
	}
	void saveToFile() {
		ofstream outFile("members.txt");
		for (auto& m : members) {
			outFile << m.getId() << " " << m.getName() << " " << m.getPhone() << " " << m.getEmail() << endl;
		}
	}
	void addMember() {
		Member m(0, "", "", "");
		m.input();
		if (exists(m.getId())) {
			cout << "이미 존재하는 ID입니다. 등록실패.\n";
			return;
		}
		members.push_back(m);
		cout << "회원 등록 성공.\n";
	}
	void veiwMembers() {
		if (members.empty()) {
			cout << "등록된 회원이 없습니다.\n";
			return;
		}
		cout << left << setw(10) << "ID"
			<< left << setw(15) << "Name"
			<< left << setw(15) << "Phone"
			<< left << setw(30) << "Email" << endl;
		cout << string(65, '-') << endl;
		for (auto& m : members) {
			m.print();
		}
	}
	void searchMember() {
		string name;
		bool fo = false;
		cout << "검색할 이름: ";
		cin >> name;
		for (auto& m : members) {
			if (m.getName() == name) {
				m.print();
				fo = true;
				return;
			}
		}
		if (fo == false) {
			cout << "없는 이름입니다.\n";
		}
	}

	void updateMember() {
		int id;
		cout << "수정할 ID: ";
		cin >> id;
		bool fo = false;
		for (auto& m : members) {
			if (m.getId() == id) {
				m.update();
				cout << "수정 되었습니다\n";
				fo = true;
			}
		}
		if (fo == false) {
			cout << "없는 ID입니다\n";
			return;
		}
	}
	void deleteMember() {
		int id;
		cout << "삭제할 ID: ";
		cin >> id;
		bool fo = false;
		for (int i = 0; i < members.size();i++) {
			if (members[i].getId() == id) {
				members.erase(members.begin() + i);
				fo = true;
				cout << "삭제되었습니다.\n";
				return;
			}
		}
		if (fo == false) {
			cout << "없는 ID입니다\n";
			return;
		}

	}

};

int main() {


	MemberManager manager;
	manager.loadFromFile();
	char menu;
	while (true)
	{
		cout << "\n================ 회원관리 ================\n";
		cout << "1. 등록\n";
		cout << "2. 전체조회\n";
		cout << "3. 검색\n";
		cout << "4. 수정\n";
		cout << "5. 삭제\n";
		cout << "Q. 종료\n";
		cout << "메뉴 선택: ";
		cin >> menu;
		switch (menu) {
		case'1':
			cout << "등록 메뉴 선택\n";
			// 등록기능구현
			manager.addMember();
			break;
		case'2':
			cout << "전체조회 메뉴 선택\n";
			manager.veiwMembers();
			// 전체조회 기능 구현
			break;
		case'3':
			cout << "검색 메뉴 선택\n";
			manager.searchMember();
			// 검색 기능 구현
			break;
		case'4':
			cout << "수정 메뉴 선택\n";
			manager.updateMember();
			// 수정 기능 구현
			break;
		case'5':
			cout << "삭제 메뉴 선택\n";
			manager.deleteMember();
			// 삭제 기능 구현
			break;
		case'Q':
		case'q':
			manager.saveToFile();
			cout << "프로그램 종료\n";
			return 0;
		default:
			cout << "잘못된 메뉴 선택입니다. 다시 선택해 주세요\n";

		}

	}



	return 0;
}