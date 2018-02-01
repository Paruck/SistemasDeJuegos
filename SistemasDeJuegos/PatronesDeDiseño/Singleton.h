#pragma once
class Singleton
{
private:
	int value;
	Singleton();
	static Singleton * Instance;

public:
	int getValue() { return value; }
	void setValue(int v) { value = v; }
	static Singleton* getInstance();
	~Singleton();
};

