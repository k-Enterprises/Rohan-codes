class Student {
	private :
	int age;
	public :
	int rollNumber;

	Student() { // default constructor 
		cout << "Constructor called !" << endl;
	}
	
	// parameterised constructors
	Student(int rollNumber) { // if the parameter has the same name as of data member
		cout << "this: " << this << endl;
		cout << "Constructor2 called !" << endl;
		this -> rollNumber = rollNumber; // we have to use this keyword which holds the address of current
	}

	Student(int r, int a) {
		cout << "Constructor3 is called !" << endl;
		age = a;
		rollNumber = r;
	}

	void display() {
		cout << "Roll number of student is: " << rollNumber << endl;
		cout << "The age of the student is: " << age << endl;
	return;
	}
	void setAge(int a) {
		if(a < 0) {
			return;
		}
		age = a;
	return;
	}

	~ Student() { // same as constructur but has ~ before it
		cout << "Destructor called !" << endl;
	}
};
