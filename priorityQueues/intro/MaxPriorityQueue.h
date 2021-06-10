#include <vector>
using namespace std;

class MaxPriorityQueue {
	private :
		vector<int> pq;
		void swap(int index1, int index2) {
			int temp = this	-> pq[index1];
			this -> pq[index1] = this -> pq[index2];
			this -> pq[index2] = temp;
		return;
		}
	public :
		int getSize() const {
			return this -> pq.size();
		}
		bool isEmpty() const {
			return this -> pq.size() == 0;
		}
		int getMax() const {
			if(this -> isEmpty()) {
				return -1;
			}
			return this -> pq.at(0);
		}
		void insert(int data) {
			if(pq.size() == 0) {
				pq.push_back(data);
				return;
			}
			pq.push_back(data);
			int childIndex = pq.size() - 1;
			int parentIndex = (childIndex - 1) / 2;
			while(childIndex > 0) {
				if(pq[childIndex] < pq[parentIndex]) {
					break;
				}
				swap(childIndex, parentIndex);
				childIndex = parentIndex;
				parentIndex = (childIndex - 1) / 2;
			}
		return;
		}
		void printCBT() {
			for(int i = 0; i < pq.size(); i ++) {
				cout << pq.at(i) << " ";
			}
			cout << endl;
		return;
		}
};
