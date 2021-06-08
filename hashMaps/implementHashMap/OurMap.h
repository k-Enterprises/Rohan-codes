#include <string>
using namespace std;
template <typename V>
class MapNode {
	public :
		V value;
		string key;
		MapNode * next;
		MapNode(string key, V value) {
			this -> value = value;
			this -> key = key;
			this -> next = NULL;
		}
		~MapNode() {
			delete this -> next;
		}
};

template <typename V>
class OurMap {
	private :
		MapNode<V> * * buckets;
		int count;
		int numBuckets;
		int getBucketIndex(string key) {
			int hashCode = 0;
			int currentCoeff = 1;
			for(int i = key.length() - 1; i >= 0; i --) {
				hashCode += (key[i] * currentCoeff) % numBuckets;
				currentCoeff *= 37;
				currentCoeff = currentCoeff % numBuckets;
			}
			return hashCode % numBuckets;
		}
		void rehash() {
			MapNode<V> ** temp = buckets;
			count = 0;
			buckets = new MapNode<V>*[numBuckets * 2];
			for(int i = 0; i < 2 * numBuckets; i ++) {
				buckets[i] = NULL;
			}
			int oldNumBuckets = numBuckets;
			numBuckets *= 2;
			for(int i = 0; i < oldNumBuckets; i ++) {
				MapNode<V> * head = temp[i];
				while(head != NULL) {
					string key = head -> key;
					V value = head -> value;
					this -> insert(key, value);
					head = head -> next;
				}
			}
			for(int i = 0; i < oldNumBuckets; i ++) {
				delete temp[i];
			}
			delete [] temp;
		}
	public :
		OurMap() {
			this -> count = 0;
			this -> numBuckets = 5;
			this -> buckets = new MapNode<V>*[numBuckets];
			for(int i = 0; i < this -> numBuckets; i ++) {
				this -> buckets[i] = NULL;
			}
		}
		~OurMap() {
			for(int i = 0; i < this -> numBuckets; i ++) {
				delete this -> buckets[i];
			}
			delete [] buckets;
		}
		int size() const{
			return this -> count;
		}
		void insert(string const &key, V const &value) {
			int bucketIndex = getBucketIndex(key);
			MapNode<V> * head = buckets[bucketIndex];
			while(head != NULL) {
				if(head -> key == key) {
					head -> value = value;
					return;
				}
				head = head -> next;
			}
			head = buckets[bucketIndex];
			MapNode<V> * newNode = new MapNode<V>(key, value);
			newNode -> next = head;
			buckets[bucketIndex] = newNode;
			this -> count ++;
			double loadFactor = 1.0 * (count) / numBuckets;
			if(loadFactor > 0.7) {
				rehash();
			}
		}
		V getValue(string const &key) const {
			int bucketIndex = getBucketIndex(key);
			MapNode<V> * head = buckets[bucketIndex];
			while(head != NULL) {
				if(head -> key == key) {
					return head -> value;
				}
				head = head -> next;
			}
			return 0;
		}
		V remove(string const &key) {
			int bucketIndex = getBucketIndex(key);
			MapNode<V> * head = buckets[bucketIndex];
			MapNode<V> * prev = NULL;
			while(head != NULL) {
				if(head -> key == key) {
					if(prev == NULL) {
						buckets[bucketIndex] = head -> next;
					} else {
						prev -> next = head -> next;
					}
					head -> next = NULL;
					V value = head -> value;
					delete head;
					count --;
					return value;
				}
				prev = head;
				head = head -> next;
			}
			return 0;
		}
		double getLoadFactor() {
			return (1.0 * this -> count) / numBuckets;
		}
};
