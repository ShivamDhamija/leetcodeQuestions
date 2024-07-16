/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* r) {
        if(!r)
            return "N,";
         string d =to_string(r->val)+",";
        d+=serialize(r->left)+serialize(r->right);        
        return d;
        
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string &d) {
        if(d[0]=='N') {d=d.substr(2);return NULL;}
        int p = d.find(',');
        TreeNode* r =new TreeNode(stoi(d.substr(0,p)));
        d=d.substr(p+1);
        r->left = deserialize(d);
        r->right = deserialize(d);
        return r;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));