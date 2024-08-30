#include <iostream>
using namespace std;

class TrieNode
{
public:
    char data;
    TrieNode *children[26];
    bool isEnd;

    TrieNode(char d)
    {
        this->data = d;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isEnd = false;
    }
};

class Trie
{
public:
    TrieNode *root;

    Trie()
    {
        root = new TrieNode('\0');
    }

    void insert(TrieNode *root, string word)
    {
        if (word.length() == 0)
        {
            root->isEnd = true;
            return;
        }

        int index = word[0] - 'a';
        TrieNode *child;
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        insert(child, word.substr(1));
    }

    void insertWord(string s)
    {
        insert(root, s);
    }

    bool search(TrieNode *root, string word)
    {
        if (word.length() == 0)
        {
            return root->isEnd;
        }

        int index = word[0] - 'a';
        TrieNode *child;
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            return false;
        }
        return search(child, word.substr(1));
    }

    bool searchword(string s)
    {
        return search(root, s);
    }

    bool isEmpty(TrieNode *root)
    {
        for (int i = 0; i < 26; i++)
        {
            if (root->children[i])
                return false;
        }
        return true;
    }

    TrieNode *deletion(TrieNode *root, string word)
    {
        
        if(root == NULL)
            return root;

        if (word.length() == 0)
        {
            if (root->isEnd)
            {
                root->isEnd = false;
            }
            if (isEmpty(root))
            {
                delete root;
                root = NULL;
            }
            return root;
        }

        int index = word[0] - 'a';
        
        root -> children[index] = deletion(root -> children[index],word.substr(1));

        if( isEmpty(root) && !root -> isEnd){
            delete root;
            root = NULL;
        }
        return root;

    }

    void remove(TrieNode *root, string word)
    {
        if (word.length() == 0)
        {
            if (root->isEnd)
            {
                root->isEnd = false;
                cout << "Word Removed" << endl;
            }
            else
            {
                cout << "Word Not found" << endl;
            }
            return;
        }

        int index = word[0] - 'a';
        TrieNode *child;
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            cout << "Word Not found" << endl;
            return;
        }

        remove(child, word.substr(1));
    }

    void removeWord(string s)
    {
        deletion(root, s);
    }
};

int main()
{

    Trie t;
    t.insertWord("hello");
    t.insertWord("hellow");
    // t.insertWord("helloll");
    t.insertWord("mix");
    t.insertWord("mixer");

    t.removeWord("mixer");
    // t.removeWord("mixer");
    t.insertWord("mixing");
    t.removeWord("mixing");
    if (t.searchword("hello"))
    {
        cout << "hello: Present" << endl;
    }
    else
    {
        cout << "hllo: Not Present" << endl;
    }

    if (t.searchword("hellow"))
    {
        cout << "hellow: Present" << endl;
    }
    else
    {
        cout << "hellow: Not Present" << endl;
    }

    if (t.searchword("helloll"))
    {
        cout << "helloll: Present" << endl;
    }
    else
    {
        cout << "helloll: Not Present" << endl;
    }

    if (t.searchword("mix"))
    {
        cout << "mix: Present" << endl;
    }
    else
    {
        cout << "mix: Not Present" << endl;
    }

    if (t.searchword("mixer"))
    {
        cout << "mixer: Present" << endl;
    }
    else
    {
        cout << "mixer: Not Present" << endl;
    }

    if (t.searchword("mixing"))
    {
        cout << "mixing: Present" << endl;
    }
    else
    {
        cout << "mixing: Not Present" << endl;
    }

    return 0;
}