template<typename T>
class Pair {
	private :
	T x;
	T y;
	public :
	void setX(T x) {
		this -> x = x;
		return;
	}
	void setY(T y) {
		this -> y  = y;
		return;
	}
	T getX() {
		return this -> x;
	}
	T getY() {
		return this -> y;
	}
};
