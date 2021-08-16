#ifndef _NODE_H_
#define _NODE_H_

using namespace std;

template <typename K, typename V>
class Node {
   public:
    Node(const K &, const V &, const long long &);
    void setHash(const long long &);
    void setValue(const V &);
    K &getKey();
    V &getValue();
    long long &getH();
    void setNext(Node<K, V> *);
    void setPrev(Node<K, V> *);
    Node<K, V> *getNext() const;
    Node<K, V> *getPrev() const;

   private:
    K key;
    V value;
    long long h;
    Node<K, V> *nextPtr, *prevPtr;

};  // Node<K,V> class

template <typename K, typename V>
Node<K, V>::Node(const K &k, const V &v, const long long &hash) {
    this->key = k;
    this->value = v;
    this->h = hash;
    this->nextPtr = setNext(nullptr);
    this->prevPtr = setPrev(nullptr);
}

template <typename K, typename V>
void Node<K, V>::setHash(const long long &hash) {
    this->h = hash;
}

template <typename K, typename V>
void Node<K, V>::setValue(const V &value) {
    this->v = value;
}

template <typename K, typename V>
K &Node<K, V>::getKey() {
    return this->key;
}

template <typename K, typename V>
V &Node<K, V>::getValue() {
    return this->value;
}

template <typename K, typename V>
long long &Node<K, V>::getH() {
    return this->h;
}

template <typename K, typename V>
void Node<K, V>::setNext(Node<K, V> *next) {
    this->nextPtr = next;
}

template <typename K, typename V>
void Node<K, V>::setPrev(Node<K, V> *prev) {
    this->prevPtr = prev;
}

template <typename K, typename V>
Node<K, V> *Node<K, V>::getNext() const {
}

template <typename K, typename V>
Node<K, V> *Node<K, V>::getPrev() const {
}
#endif /* _NODE_H_ */