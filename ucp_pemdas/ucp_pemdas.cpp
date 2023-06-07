#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x;
public:
	bidangDatar() {
		x = 0;
	}
	virtual void input() {}
	virtual float luas(int a) { return 0; }
	virtual float keliling(int a) { return 0; }
	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;
	}
};

class lingkaran :public bidangDatar {
public:
	void input() {
		int r;
		int a;

		cout << "masukan jejari :";
		cin >> r;
		setX(r);
	}
	float hitung() {
		return 3.14 * getX() * getX();
	}
	float hasil();
};

class Bujursangkar : public bidangDatar {
public:
	void input() {
		int s;
		cout << "Masukkan sisi : ";
		cin >> s;
		setX(s);
	}

	float Luas() {
		return getX() * getX();
	}

	float Keliling() {
		return 4 * getX();
	}
};

int main() {
	bidangDatar* bd;


	return 0;

}