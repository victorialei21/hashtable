#include "main.h"

using namespace std;

int main(int argc, char *argv[]) {
    try {
        Polynomial<string> sample;
        long long hashcode = sample("a");

        Hashtable<string, short, Polynomial<string>> ht1;

        cout << hashcode << endl;

    }  //end try blcok
    catch (NoSuchKey &e) {
    } catch (DuplicateKey &e) {
    } catch (...) {
    }

    return 0;
}  //end main