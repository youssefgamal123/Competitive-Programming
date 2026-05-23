#include <iostream>
#include <vector>

using namespace std;

vector<vector<long long>> adjlist;


// TREE DIAMETER = LONGEST PATH IN THE TREE =  Maximum distance between any two nodes

/*


to find the tree diameter at a normal tree not a bst
u can dfs to the farthesst node from the current node and then from thta u can dfs to
the farthest node from that node and this distance can be ur tree diamater

a keynote is that the farthest node from root is a one end of the diameter
the another farthest node from there is the other end of the diamter

so u go to 2 proceess

dfs from root -> to get the farthest node from root --> gets u one end of the diameter
dfs from the farthest node from node -> to get the rest of the diameter



First DFS

Purpose:

find one endpoint and actually it's distance here does not matter , what matters is the farthes

NOT:

find diameter


diameter =distance between:(farthest node) and (farthest node from it)

NOT: distance1 + distance2



        1
       / \
      2   3
         / \
        4   5
           /
          6


First dfs: 6
second dfs : 2

diameter =4





*/


long long diameter = -1;

long long firstFarnode = 1;

void dfs(long long node, long long parent, long long distance) {

    // Recursively process every connected child/neighbor

    if (distance > diameter) {
        diameter = distance;
        firstFarnode = node;
    }

    for (long long adjnodes : adjlist[node]) {

        if (adjnodes == parent) {
            continue;
        }

        dfs(adjnodes, node, distance + 1);
    }
}

int main() {

    int n;
    cin >> n;

    adjlist.resize(n + 1, {});

    for (long long i = 0, u, v; i < n-1; i++) {

        cin >> u >> v;

        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }

    dfs(1, -1, 0);

    dfs(firstFarnode, -1, 0);

    cout << diameter << endl;
}

/*

to find the tree diameter in a binary tree / BST

takes every node as a candadite and sees the path of it
and the diameter shall be the max path eventually found through all
so at every node:
we compute:

left subtree depth + right subtree depth

which represents:
the longest path passing THROUGH the current node

then we maximize over all nodes

eventually the maximum path found through any node
becomes the diameter of the tree


example:

        1
       / \
      2   3
     / \
    4   5

at node 2:
leftDepth = 1
rightDepth = 1

path through node 2:
4 -> 2 -> 5

length = 2


at node 1:
leftDepth = 2
rightDepth = 1

path through node 1:
4 -> 2 -> 1 -> 3

length = 3

this becomes the diameter



class Solution {
public:

    int diameter = 0;

    int dfs(TreeNode* node) {

        if (node == nullptr) {
            return 0;
        }

        int leftDepth = dfs(node->left);

        int rightDepth = dfs(node->right);

        // path passing through current node
        diameter = max(diameter, leftDepth + rightDepth);

        // return current subtree depth upward
        return 1 + max(leftDepth, rightDepth);
    }

    int diameterOfBinaryTree(TreeNode* root) {

        dfs(root);

        return diameter;
    }
};








 */