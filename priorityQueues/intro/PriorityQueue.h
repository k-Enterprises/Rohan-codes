#include <vector>
using namespace std;

class PriorityQueue {
	private :
		vector<int> pq;
		void swap(int index1, int index2) {
			int temp = this -> pq[index1];
			this -> pq[index1] = this -> pq[index2];
			this -> pq[index2] = temp;
		return;
		}
		int getIndex(int l, int r) {
			if(pq[l] < pq[r]) {
				return l;
			}
			return r;
		}
	public :
		bool isEmpty() const {
			if(this -> pq.size() == 0) {
				return true;
			}
			return false;
		}
		int getSize() const {
			return this -> pq.size();
		}
		int getMin() const {
			if(this -> pq.size() == 0) {
				return -1;
			}
			return this -> pq.at(0);
		}
		void insert(int const &data) {
			if(this -> pq.size() == 0) {
				pq.push_back(data);
				return;
			}
			pq.push_back(data);
			int childIndex = pq.size() - 1;
			int parentIndex = (childIndex - 1) / 2;
			while(childIndex != 0 && pq.at(childIndex) < pq.at(parentIndex)) {
				int temp = pq[childIndex];
				pq[childIndex] = pq[parentIndex];
				pq[parentIndex] = temp;
				childIndex = parentIndex;
				parentIndex = (childIndex - 1) / 2;
			}
		return;
		}
		void removeMin() {
			int temp = this -> pq[0];
			this -> pq[0] = this -> pq[pq.size() - 1];
			this -> pq[pq.size() - 1] = temp;
			pq.pop_back();
			int pi = 0;
			int l = (2 * pi) + 1;
			int r = (2 * pi) + 2;
			while(l <= pq.size() - 1) {
				if(pq[pi] < pq[l] && pq[pi] < pq[r]) {
					break;
				}
				int minIndex = getIndex(l, r);
				swap(pi, minIndex);
				pi = minIndex;
				l = (2 * pi) + 1;
				r = (2 * pi) + 2;
			}
			return;
		}
		void printCBT() const {
			for(int i = 0; i < this -> pq.size(); i ++) {
				cout << pq.at(i) << " ";
			}
			cout << endl;
		return;
		}
};
