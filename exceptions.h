#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <stdexcept>
#include <string>

using namespace std;

/****************************************************************************
*                             NoSuchKey class                               *
****************************************************************************/

class NoSuchKey : public logic_error {
   public:
    NoSuchKey() : logic_error("ERROR: No such key.") {}
    NoSuchKey(const string &what) : logic_error(what) {}
};

/****************************************************************************
*                           DuplicateKey class                              *
****************************************************************************/

class DuplicateKey : public logic_error {
   public:
    DuplicateKey() : logic_error("ERROR: Duplicate key.") {}
    DuplicateKey(const string &what) : logic_error(what) {}
};

#endif /* EXCEPTIONS_H */