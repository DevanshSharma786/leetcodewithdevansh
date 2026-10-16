
class Solution {
public:
    vector<Node*> noderegister;

    void dfs(Node* actual, Node* clone) {
        for (auto neighbor : actual->neighbors) {
            if (noderegister[neighbor->val] == NULL) {
                Node* newNode = new Node(neighbor->val);
                noderegister[newNode->val] = newNode;

                clone->neighbors.push_back(newNode);
                dfs(neighbor, newNode);
            }
            else {
                clone->neighbors.push_back(
                    noderegister[neighbor->val]
                );
            }
        }
    }

    Node* cloneGraph(Node* node) {
        if (node == NULL) return NULL;

        noderegister.resize(110, NULL);

        Node* clone = new Node(node->val);
        noderegister[clone->val] = clone;

        dfs(node, clone);

        return clone;
    }
};
