class Node {
public:
    char data;
    bool terminal;
    unordered_map<char, Node*> children;

    Node(char data) {
        this->data = data;
        this->terminal = false;
    }

    void maketerminal() {
        this->terminal = true;
    }

    bool isterminal() {
        return this->terminal == true;
    }
};

class Trie {
public:
    Node* root;

    Trie() {
        root = new Node('\0');
    }

    void insert(string word) {
        Node* curr = root;

        for (int i = 0; i < word.length(); i++) {
            char ch = word[i];

            if (curr->children.count(ch)) {
                curr = curr->children[ch];
            }
            else {
                Node* child = new Node(ch);
                curr->children[ch] = child;
                curr = child;
            }
        }

        curr->maketerminal();
    }

    bool search(string word) {
        Node* curr = root;

        for (int i = 0; i < word.length(); i++) {
            char ch = word[i];

            if (curr->children.count(ch)) {
                curr = curr->children[ch];
            }
            else {
                return false;
            }
        }

        return curr->isterminal();
    }

    bool startsWith(string prefix) {
        Node* curr = root;

        for (int i = 0; i < prefix.size(); i++) {
            char ch = prefix[i];

            if (curr->children.count(ch)) {
                curr = curr->children[ch];
            }
            else {
                return false;
            }
        }

        return true;
    }
};