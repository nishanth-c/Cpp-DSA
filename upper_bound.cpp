#include <bits/stdc++.h>
using namespace std;


struct BST
{
int val;
BST* left;
BST* right;
};
int fun(root)
{
	BST* root;
	BST* temp = root;										//1 11 15 <7,11>
	vector<int> data;
	data.push_back(temp.val)
	while(1)
	{
		
		if(temp->left != NULL)
			{
			temp =temp->left;
			data.push_back(temp.val)
		}
		else
			break;
	}
	temp = root;	
	while(1)
	{
		
		if(temp->right != NULL)
			{
			temp =temp->right;								
			data.push_back(temp.val)
		}
		else
			break;
	}

	sort(data.begin(),data.end());							
	int low,high;
	low = lower_bound()										
	high = upper_bound()									

	return high- low;

	// return 0;
}
