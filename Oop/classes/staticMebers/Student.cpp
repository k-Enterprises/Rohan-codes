class Student {
	private :
	const int rollNumber;
	int age;
	static int totalStudent; // static member
	public :
	Student(int rollNumber, int age) : rollNumber(rollNumber) {
		this -> age = age;
		totalStudent ++;
	}
	static int getTotalStudent() { // only class can access this, can only access static members
		return totalStudent;
	}
	void display() {
		cout << "Roll Number: " << this -> rollNumber << ", Age: " << this -> age << endl;
	}
};
int Student :: totalStudent = 0; // can also access private static members
