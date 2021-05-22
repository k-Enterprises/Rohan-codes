class Student {
	private :
	int age;
	public :
	char * name;
	Student(int age, char * name) {
		this -> age = age;
		this -> name = new char[strlen(name) + 1];
		strcpy(this -> name, name);
	}

	Student(Student const &s) { // always pass by reference otherwise infinite loop of calling copy constructor
		this -> age = s.age;
		this -> name = new char[strlen(s.name) + 1];
		strcpy(this -> name, s.name);
	}
	
	void display() {
		cout << "Name: " << this -> name << " age: " << this -> age << endl;
	}
};
