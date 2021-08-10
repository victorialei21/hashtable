#ifndef HASHTABLE_H
#define HASHTABLE_H

#include "node.h"
#include "exceptions.h"
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

template <typename K, typename V, typename H>
class Hashtable
{

public:
  Hashtable(const size_t = 11, const H & = H());
  Hashtable(const Hashtable<K, V, H> &);
  ~Hashtable();
  size_t capacity() const;
  void clear();
  bool empty() const;
  V &get(const K &) const; // throws NoSuchKey
  const Hashtable<K, V, H> &operator=(const Hashtable<K, V, H> &);
  V &operator[](const K &) const; // throws NoSuchKey
  void put(const K &, const V &); // throws DuplicateKey
  V remove(const K &);            // throws NoSuchKey
  // replace returns the replaced value
  V replace(const K &, const V &); // throws NoSuchKey
  size_t size() const;
  void printHashTable();

private:
  /** the bucket array of this hash table */
  Node<K, V> **table;
  /** the size of this hash table */
  size_t sz;
  /** the capacity of this hash table */
  size_t cap;
  /** the hash-code function of this hash table */
  H hcf;
  /** the load factor (gamma) of this hash table */
  double gamma;
  /** minimum load factor for decreasing the table's capacity */
  double gammaMin;
  /** the coefficient a for MAD compression */
  size_t a;
  /** the coefficient b for MAD compression */
  size_t b;
  /** the current index of the capacity in the prime numbers table */
  size_t primeIndex;
  /** the initial capacity of the table */
  size_t initialCap;
  /** the table of roughly doubling prime numbers */
  const vector<size_t> primes = {11, 23, 47, 97, 197, 397, 797, 1597, 3203,
                                 6421, 12853, 25717, 51437, 102877, 205759, 411527, 823117, 1646237,
                                 3292489, 6584983, 13169977, 26339969, 52679969, 105359939,
                                 210719881, 421439783, 842879579, 1685759167, 3371518343,
                                 6743036717, 13486073473, 26972146961, 53944293929, 107888587883,
                                 215777175787, 431554351609, 863108703229, 1726217406467,
                                 3452434812973, 6904869625999, 13809739252051};

  size_t compress(long long) const;
  void changeCapacity(size_t);
  void rehash(Node<K, V> **, size_t);
  void setA();

}; // Hashtable<K,V,H> class

template <typename K, typename V, typename H>
Hashtable<K, V, H>::Hashtable(const size_t capacity, const H &hcf)
{
}

template <typename K, typename V, typename H>
Hashtable<K, V, H>::Hashtable(const Hashtable<K, V, H> &rhsObject)
{
}

template <typename K, typename V, typename H>
Hashtable<K, V, H>::~Hashtable()
{
}

template <typename K, typename V, typename H>
size_t Hashtable<K, V, H>::capacity() const
{
}

template <typename K, typename V, typename H>
void Hashtable<K, V, H>::clear()
{
}

template <typename K, typename V, typename H>
bool Hashtable<K, V, H>::empty() const
{
}

template <typename K, typename V, typename H>
V &Hashtable<K, V, H>::get(const K &key) const
{

} // throws NoSuchKey

template <typename K, typename V, typename H>
const Hashtable<K, V, H> &Hashtable<K, V, H>::operator=(const Hashtable<K, V, H> &rhs)
{
}

template <typename K, typename V, typename H>
V &Hashtable<K, V, H>::operator[](const K &key) const
{

} // throws NoSuchKey

template <typename K, typename V, typename H>
void Hashtable<K, V, H>::put(const K &key, const V &value)
{
} // throws DuplicateKey

template <typename K, typename V, typename H>
V Hashtable<K, V, H>::remove(const K &key)
{
} // throws NoSuchKey

template <typename K, typename V, typename H>
V Hashtable<K, V, H>::replace(const K &key, const V &value)
{

} // throws NoSuchKey

template <typename K, typename V, typename H>
size_t Hashtable<K, V, H>::size() const
{
}

template <typename K, typename V, typename H>
size_t Hashtable<K, V, H>::compress(long long num) const
{
}

template <typename K, typename V, typename H>
void Hashtable<K, V, H>::changeCapacity(size_t newIndex)
{
}

template <typename K, typename V, typename H>
void Hashtable<K, V, H>::rehash(Node<K, V> **newTable, size_t oldCapacity)
{
}

template <typename K, typename V, typename H>
void Hashtable<K, V, H>::setA()
{
}

template <typename K, typename V, typename H>
void Hashtable<K, V, H>::printHashTable()
{
}

#endif /* HASHTABLE_H */
