class Student {
	private :
	int age;
	int const rollNumber;
	public :
	Student(int rollNumber, int age) : rollNumber(rollNumber) {
		this -> age = age;
	}
	void display() const { // will give error if const is not mentioned for the constant objects
		cout << "Roll Number: " << this -> rollNumber << ", Age: " << this -> age << endl;
	}
};
