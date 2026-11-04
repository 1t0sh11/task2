#pragma once
#include<iostream>
#include<string>
#include<fstream>

namespace Products {
	class Product
	{
	protected:
		std::string name;
		std::string producer;
		float price;
		int age;
	public:
		Product();
		Product(std::string name,std::string producer,float price, int age);
		virtual ~Product();

		void setName(std::string name);
		void setProducer(std::string producer);
		void setPrice(float price);
		void setAge(int age);

		std::string getName()const;
		std::string getProducer()const;
		float getPrice()const;
		int getAge()const;

		virtual void show()const = 0;
		virtual float calcPrice()const = 0;
		virtual void saveToFile(std::ofstream& file) const = 0;
		virtual void loadFromFile(std::ifstream& file) = 0;
	
	};
}


