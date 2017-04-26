#include<vector>
#include<map>
#include<set>
#include<iostream>
#include<queue>
#include<functional>
#include<unordered_map>
#include<unordered_set>
#include<string>

using namespace std;

//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};



double func(double agil, double master, double crit, double vers, double haste)
{
	double total = 0;
	total += agil;
	total += 0.65*master;
	total += 0.63*crit;
	total += 0.6*vers;
	total += 0.51*haste;
	return total;
}

int main()
{
	double agil = 0, master = 0, crit = 0, vers = 0, haste = 0;
	while (cin >> agil >> master >> crit >> vers >> haste)
	{
		cout << func(agil, master, crit, vers, haste) << endl;
	}
  	return 0;
}