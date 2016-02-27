#include <iostream>
#include <cstring>

using namespace std;

class str16
{ 
	char *p;

public:
	str16(const char *s = NULL) {
		if (s != NULL) {
			p = new char [strlen(s) + 1];
			strcpy(p, s);
		}	
	}
	str16(const str16& n) {
		if (n.p != NULL) {
			p = new char [strlen(n.p) + 1];
			strcpy(p, n.p);
		}
	}
	str16& operator = (str16& n) {
		p = n.p;
		n.p = NULL;
		return *this;
	}
	~str16() {
		delete [] p;
	}
	void getString() {
		cout << p << endl;
	}
	void setString(const char *s = NULL) {
		delete [] p;
		if (s != NULL) {
			p = new char [strlen(s) + 1];
			strcpy(p, s);
		}
	}
	bool operator == (const str16& n) {
		return ( strcmp(p, n.p) == 0 );
	}
	/*
	num& operator ++ () {
		x++;
		y++;
		return *this;
	}
	num operator ++ (int) {
		num n = *this;
		x++;
		y++;
		return n;
	}
	num& operator + (const num& n) {
		x += n.x;
		y += n.y;
		return *this;
	} */
};
int main()
{
	str16 S1("abc");
	str16 S2;
	//str16 S2 = S1; //конструктор копирования
	S2 = S1; //перегруженный =
	S1.setString("def");
	S1.getString();
	S2.getString();
	cout << (S1 == S2) << endl;
	return 0;
}
