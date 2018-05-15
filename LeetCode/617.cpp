#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	TreeNode* mergeTrees(TreeNode* t1,TreeNode* t2)
	{
		if(t1 == nullptr ) return t2;
		if(t2 == nullptr ) return t1;
		TreeNode* t3 = new TreeNode(t1->val+t2->val);
		t3->left = mergeTrees(t1->left,t2->left);
		t3->right = mergeTrees(t1->right,t2->right);
		return t3;
	}	
}

int main()
{
	return 0;
}
