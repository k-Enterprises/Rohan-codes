class Student {
	public :
	int rollNumber;
	private :
	int age;
	public: 
	void display() {
		cout << "Roll number of student is: " << rollNumber << endl;
		cout << "Age of student is: " << age << endl;
	return;
	}
	int getAge() {
		return age;
	}
	void setAge(int a) {
		if(a < 0) {
			return;
		}
		age = a;
	return;
	}
};
