#ifndef Wk1_hpp_18
#define Wk1_hpp_18

#include <iostream>

class SecretType {
public:
	void print(){std::cout << "Name: "<<name << "\nAge: " <<age <<"\nWeight: " <<weight << "\nHeight: " <<height;};
	void setName(std::string s){name = s;};
	void setAge(int a){age = a;};
	void setWeight(int w){weight = w;};
	void setHeight(double h){height = h;};
	std::string getName(){return name;};
	int getAge(){return age;};
	int getWeight(){return weight;};
	double getHeight(){return height;};
	SecretType(std::string nameDef = "", int ageDef = 0, int weightDef = 0, double heightDef = 0)
	{name=nameDef;age=ageDef;weight= weightDef;height=heightDef;};
private:
	std::string name;
	int age, weight;
	double height;
};

#endif


#ifndef Wk1_hpp_2
#define Wk1_hpp_2

class DayType{
private:
	std::string day[7] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	int current;
public:
	DayType() {current = 0;};
	void setDay(int d){current = d;};
	void setDay(std::string d){for(int i = 0; i < 7; i++){if(day[i] == d)current = i;};};
	std::string getDay(){return day[current];};
	std::string getNext(){return day[current+1];};
	std::string getYester(){return day[current-1];};
	std::string operator+ (int d){return day[(current + d)%7];};
	
};
#endif


class personType{
public:
	void print() const{std::cout << firstName <<" "<< midName <<" "<< lastName  << "\n";};
	void setName(std::string first, std::string last){firstName = first; lastName = last;};
	void setFirst(std::string first){firstName = first;};
	void setMid(std::string mid){midName = mid;};
	void setLast(std::string last){lastName = last;};
	bool checkFirst(std::string first){if(firstName == first)return 1; else return 0;};
	bool checkLast(std::string last){if(lastName == last)return 1; else return 0;};
	std::string getFirstName() const{return firstName;};
	std::string getLastName() const{return lastName;};
	personType();
	personType(std::string first, std::string last){firstName = first; lastName = last;};
private:
	std::string firstName; 
	std::string lastName; 
	std::string midName;
};
