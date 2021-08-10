#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

using namespace std;

template <typename K>
class Polynomial
{
public:
  long long operator()(const K &s) const;
  static const int a = 41;
};

template <typename K>
long long Polynomial<K>::operator()(const K &s) const
{
  long long hash = 0;

  for (size_t i = 0; i < s.length(); i++)
  {
    hash = (a * hash) + int(s[i]);
  }

  return hash;
} // operator()

#endif /* POLYNOMIAL_H */