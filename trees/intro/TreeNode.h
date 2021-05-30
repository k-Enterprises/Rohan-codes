#include <vector>
using namespace std;
template <typename T>
class TreeNode {
	public :
		T data;
		vector<TreeNode<T>*> children; // <T> is optional otherwise it will inherit it from parent data
		TreeNode(T const &data) {
			this -> data = data;
		}
};
