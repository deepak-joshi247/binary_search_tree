/************************************************************
    Following is the Binary Search Tree node structure

    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };

************************************************************/

TreeNode *LCAinaBST(TreeNode *root, TreeNode *P, TreeNode *Q)
{
    //things needed
    TreeNode* curr = root;
    while(curr!=NULL){
        if(curr->data == P->data || curr->data == Q->data){
            return curr;
        }
        if(curr->data>P->data && curr->data>Q->data){
            curr = curr->left;
        }
        if(curr->data< P->data && curr->data < Q->data){
            curr = curr->right;
        }
        if((curr->data >Q->data && curr->data< P->data)||(curr->data < Q->data && curr->data > P->data)){
            return curr;
        }
    }
}


