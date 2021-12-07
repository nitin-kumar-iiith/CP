#include <map>
#include <set>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <limits>
#include <time.h>
#include <math.h>
#include <string>
#include <vector>
#include <bitset>
#include <stdio.h>
#include <numeric>
#include <utility>
#include <sstream>
#include <climits>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <functional>
#include <ext/pb_ds/assoc_container.hpp> //for line 114
using namespace __gnu_pbds;              //for line 114
using namespace std;
/* Input Method */
#define SS(t) scanf("%s", t);
#define SI(t) scanf("%d", &t);
#define SL(t) scanf("%ld", &t);
#define SCC(t) scanf("%c", &t);
#define SCF(t) scanf("%f", &t);
#define SCLF(t) scanf("%lf", &t);
#define SLLD(t) scanf("%lld", &t);
#define readL(s) getline(cin, s);
/*
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
*/
/* Output Method */
#define endl "\n"
#define BR printf("\n");
#define PS(s) printf("%s\n", s);
#define PI(x) printf("%d\n", x);
#define PLL(x) printf("%lld\n", x);
/* Memory set,Inititlization */
#define MP make_pair
#define PB push_back
#define MEM(a, b) memset(a, (b), sizeof(a));
#define clr(x) memset(x, 0, sizeof(x))
#define gc getchar_unlocked
#define read(type) readInt<type>()
/* Iterator */
#define FOR(i, j, k, in) for (int i = j; i < k; i += in)
#define RFOR(i, j, k, in) for (int i = j; i >= k; i -= in)
#define REP(i, j) FOR(i, 0, j, 1)
#define REP1(i, j) FOR(i, 1, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define RREP1(i, j) RFOR(i, j, 1, 1)
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define IN(A, B, C) assert(B <= A && A <= C)
#define tr(it, x) for (auto it = x.begin(); it != x.end(); it++)
#define trr(it, x) for (auto it = x.rbegin(); it != x.rend(); it +)
/* Constants */
#define EPS 1e-9
#define INF (int)1e9
#define MOD 1000000007
const double pi = acos(-1.0);
#define PIE 3.1415926535897932384626433832795
/* Operators */
#define Mod(x, m) \
    x = x % m;    \
    if (x < 0)    \
        x += m;
bool floatCmp(float a, float b)
{
    if (abs(a - b) < 1e-9)
        return true;
    else
        return false;
}
#define NZL(x) __builtin_clz(x)               //number of zero from leftmost bit to first bit 1
#define NZR(x) __builtin_ctz(x)               //number of zero from rightmost bit to first bit 1
#define CountSetBits(x) __builtin_popcount(x) //number of 1's in number
#define CheckParity(x) __builtin_parity(x)    // even or odd parity
/* Data Type */
#define LL long long
//#define int long long //comment line 81-84 if this is uncommented
typedef pair<int, int> PII;
typedef tuple<int, int, int> TIII;
typedef vector<TIII> VTIII;
typedef pair<LL, LL> PLL;
typedef vector<PLL> VPLL;
typedef vector<int> VI;
typedef vector<LL> VL;
typedef vector<VL> VVL;
typedef vector<string> VS;
typedef vector<PII> VPII;
typedef vector<VI> VVI;
typedef map<int, int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef priority_queue<int> MAX_HEAP;
typedef priority_queue<PII> MAX_HEAP_PAIR;
typedef priority_queue<int, vector<int>, greater<int>> MIN_HEAP;
typedef priority_queue<PII, vector<PII>, greater<PII>> MIN_HEAP_PAIR;
typedef multiset<int> MIN_AVL;
typedef multiset<int, greater<int>> MAX_AVL;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;
typedef tree<int, null_type, less<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    indexed_set;
/****** Template of some basic operations *****/
template <typename T, typename U>
inline void amin(T &x, U y)
{
    if (y < x)
        x = y;
}
template <typename T, typename U>
inline void amax(T &x, U y)
{
    if (x < y)
        x = y;
}
/* Debugger */
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define deb(x) cout << #x << " = " << x << "\n";
#define deb2(x, y) cout << #x << " = " << x << ", " << #y << " = " << y << "\n";
#define deba(i, a, n) \
    fo(i, n) { cout << a[i] << " "; }
#define msg(x) cout << x << "\n";
#define msgs(x) cout << x << " ";
/* Access Elements */
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
/* Sort */
#define sortall(x) sort(all(x))
/* Unsort */
#define unsort(x) random_shuffle(x.begin(), x.end());
/* Reverse */
#define rev(x) reverse(x.begin(), x.end());
//const int N = 3e5;
#define Matrix_type int
void takeInput2dMatrix()
{
    //2-D Matrix input
    int m, n, temp;
    cin >> m, n;
    Matrix_type **arr = new Matrix_type *[m];
    REP(i, m)
    {
        arr[i] = new Matrix_type[n];
        REP(j, n)
        {
            SI(temp);
            arr[i][j] = temp;
        }
    }
}
void delete2dMatrix(Matrix_type **arr, int num_rows)
{
    //2-D Matrix delete
    REP(i, num_rows)
    {
        delete arr[i];
    }
    delete[] arr;
}

//void multiply2dMatrix(Matrix_type &F[2][2], Matrix_type &M[2][2])
void multiply2dMatrix(Matrix_type F[2][2], Matrix_type M[2][2])
{ //2 D Multiply
    Matrix_type res[2][2];
    Matrix_type x = F[0][0] * M[0][0] + F[0][1] * M[1][0];
    Matrix_type y = F[0][0] * M[0][1] + F[0][1] * M[1][1];
    Matrix_type z = F[1][0] * M[0][0] + F[1][1] * M[1][0];
    Matrix_type w = F[1][0] * M[0][1] + F[1][1] * M[1][1];
    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = w;
}
void multiply3dMatrix(Matrix_type F[3][3], Matrix_type M[3][3])
{
    Matrix_type a = F[0][0] * M[0][0] + F[0][1] * M[1][0] + F[0][2] * M[2][0];
    Matrix_type b = F[0][0] * M[0][1] + F[0][1] * M[1][1] + F[0][2] * M[2][1];
    Matrix_type c = F[0][0] * M[0][2] + F[0][1] * M[1][2] + F[0][2] * M[2][2];
    Matrix_type d = F[1][0] * M[0][0] + F[1][1] * M[1][0] + F[1][2] * M[2][0];
    Matrix_type e = F[1][0] * M[0][1] + F[1][1] * M[1][1] + F[1][2] * M[2][1];
    Matrix_type f = F[1][0] * M[0][2] + F[1][1] * M[1][2] + F[1][2] * M[2][2];
    Matrix_type g = F[2][0] * M[0][0] + F[2][1] * M[1][0] + F[2][2] * M[2][0];
    Matrix_type h = F[2][0] * M[0][1] + F[2][1] * M[1][1] + F[2][2] * M[2][1];
    Matrix_type i = F[2][0] * M[0][2] + F[2][1] * M[1][2] + F[2][2] * M[2][2];
    F[0][0] = a;
    F[0][1] = b;
    F[0][2] = c;
    F[1][0] = d;
    F[1][1] = e;
    F[1][2] = f;
    F[2][0] = g;
    F[2][1] = h;
    F[2][2] = i;
}

void multiply3dMatrixLoop(Matrix_type a[3][3], Matrix_type b[3][3])
{
    Matrix_type mul[3][3];
    REP(i, 3)
    {
        REP(j, 3)
        {
            mul[i][j] = 0;
            REP(k, 3)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    // storing the multiplication result in a[][]
    REP(i, 3)
    {
        REP(j, 3)
        { // Updating our matrix
            a[i][j] = mul[i][j];
        }
    }
}
int size = 1;
int n = size;
VVL map1 = VVL(n, VL(n));
VVL map2 = VVL(n, VL(n, 0));
void multiplyNdMatrix(VVL &mat1, VVL &mat2)
{
    VVL res = VVL(mat1[0].size(), VL(mat1[0].size(), 0));
    REP(i, mat1[0].size())
    {
        REP(j, mat1[0].size())
        {
            res[i][j] = 0;
            REP(k, mat1[0].size())
            {
                res[i][j] = ((res[i][j]) + ((mat1[i][k]) * (mat2[k][j])));
            }
        }
    }
    REP(i, mat1[0].size())
    {
        REP(j, mat1[0].size())
        {
            mat1[i][j] = res[i][j] % MOD;
        }
    }
}
/*
vector <vector<long long>> matrix_expo(vector <vector<long long>> &a, long long k) { vector call by refernce and vector return
  vector <vector<long long>> temp=vector <vector<long long>> (a[0].size(), vector <long long>(a[0].size(),0)) ;
  ...
  return temp;
}
int main() { //taking graph as input
  long long n,m,k,x,y;
  cin >> n>>m>>k ;
  vector <vector<long long>> map=vector <vector<long long>> (n, vector <long long>(n,0)) ;
  for(int i=0;i<m;i++){
    cin>>x>>y;
    map[x-1][y-1]=1;
  }
  vector <vector<long long>> fmap=matrix_expo(map, k);  //accepting returned vector
  cout <<ans<< "\n";
}*/
//VI v[N];
//int a[N];

void printGraph1(VI adj[], int V)
{
    //adj List Unweighted graph
    REP(vertex, V)
    {
        msgs("Vertex:");
        msgs(vertex);
        REP(i, adj[vertex].size())
        {
            msgs("->");
            msgs(adj[vertex][i]);
        }
        msg("");
    }
}
void printGraph2(VPII adj[], int V)
{
    //adj List Weighted graph
    REP(vertex, V)
    {
        msgs("Vertex:");
        msgs(vertex);
        REP(i, adj[vertex].size())
        {
            msgs("->(");
            msgs(adj[vertex][i].F);
            msgs(adj[vertex][i].S);
            msgs(" )");
        }
        msg("");
    }
}
void addEdge1(VI adj[], int src, int dest)
{
    //unweighted undirected
    adj[src].push_back(dest);
    adj[dest].push_back(src);
}
void addEdge2(VI adj[], int src, int dest)
{
    //unweighted directed
    adj[src].push_back(dest);
}
void addEdge3(VPII adj[], int src, int dest, int wght)
{
    //weighted undirected
    adj[src].PB(MP(dest, wght));
    adj[dest].PB(MP(src, wght));
}
void addEdge4(VPII adj[], int src, int dest, int wght)
{
    //weighted directed
    adj[src].PB(MP(dest, wght));
}
void inputAdjListUnweighted()
{
    int N; //num of vertices
    int M; //num of edges
    int src, dest;
    SI(N);
    VI adj[N];
    SI(M);
    REP(i, M)
    {
        SI(src);
        SI(dest);
        addEdge1(adj, src, dest);
    }
}
void inputAdjListWeighted()
{
    int N; //num of vertices
    int M; //num of edges
    int src, dest, wght;
    SI(N);
    VPII adj[N];
    SI(M);
    REP(i, M)
    {
        SI(src);
        SI(dest);
        SI(wght);
        addEdge3(adj, src, dest, wght);
    }
}
void inputAdjMatUnWeighted()
{
    int N; //num of vertices
    int M; //num of edges
    int src, dest, wght;
    SI(N);
    int adj[N][N];
    clr(adj); // make the graph null graph
    SI(M);
    REP(i, M)
    {
        SI(src);
        SI(dest);
        // SI(wght); //makes graph weighted
        // adj[src][dest] = wght;//makes graph unweighted
        // adj[dest][src] = wght;//makes graph undirected
        adj[src][dest] = 1; //makes graph unweighted
        adj[dest][src] = 1; //makes graph undirected
    }
}
void solution(VI arr, unsigned int k)
{

    cout << "result";
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1, k, n, temp;
    //SI(t);
    while (t--)
    {
        SI(n);
        SI(k);
        VI arr(n);
        REP(i, n)
        {
            SI(temp);
            arr[i] = temp;
        }
        solution(arr, k);
    }
    return 0;
}

//Note on speed of operation(fastest to slowest)
//array,unordered_map,map
//sort,unordered_set,set
//priority queue,multiset