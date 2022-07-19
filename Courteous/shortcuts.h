//
//  shortcuts.h
//  Courteous
//
//  Created by Ryan Zhang on 19/7/2022.
//

//  A shorthand header file, which includes the C++ standard library (or the majority of it),
//  as well as some other useful shortcuts (which look horrible in code, but work, so it works).
//  Kenneth, feel free to add anything to shortcuts.h.
//  Every .cpp should include shortcuts.h.

#ifndef shortcuts_h
#define shortcuts_h

//includes. C++ standard library.
#include <cstdlib>

#include <iostream>
#include <cstdio>
#include <iomanip>
#include <fstream>

#include <cmath>
#include <cstring>
#include <ctime>

#include <deque>
#include <string>
#include <stack>
#include <vector>
#include <map>
#include <queue>
#include <list>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <bitset>

#include <algorithm>
#include <numeric>
#include <random>
#include <functional>

#include <fstream>
#include <iterator>
#include <limits>
#include <sstream>
#include <streambuf>
#include <utility>

//namespaces.
using namespace std;

//typedefs.
typedef long long _;
typedef long long ll;
typedef int _0;
typedef double _D;
typedef unsigned long long u_;
typedef string str;
typedef vector<_> v_;
typedef pair<_, _> _p;
typedef const long long constant;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

//defines.
#define ef else if
#define leave exit(0);

#define v(x) vector<x >
#define v2(x) vector<vector<x > >
#define v3(x) vector<vector<vector<x > > >

#define q(x) queue<x >
#define dq(x) deque<x >
#define s(x) set<x >
#define st(x) stack<x >
#define ms(x) multiset<x >
#define m(x, y) map<x , y >
#define b(x) bitset<x >
#define l(x) list<x >

#define i(x) x::iterator

#define pr(x, y) pair< x, y >
#define mp(x, y) make_pair(x, y)

#define pb push_back

#endif /* shortcuts_h */
