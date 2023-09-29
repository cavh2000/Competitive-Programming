#include <bits/stdc++.h>
 
#define endl '\n'
#define lli long long int
#define ld long double
#define all(v) v.begin(), v.end()
#define fastIO(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define SZ(s) int(s.size())
#define debugg(x) cerr << #x << " = " << x << endl;
#define forn(i, n) for(int i = 0; i < (n); i++)
#define forr(i, a, b) for(int i = (a); i <= (b); i++)

using namespace std;

const int MAXN = 1000 + 100;

char mat[MAXN][MAXN];
int dist[MAXN][MAXN];
int to_move[MAXN][MAXN];

const int U = 0;
const int L = 1;
const int R = 2;
const int D = 3;

// Noten que:
// delta[0] = moverme arriba, por lo tanto U = 0
// delta[1] = moverme izquierda, por lo tanto L = 1
// delta[2] = moverme derecha, por lo tanto R = 2
// delta[3] = moverme abajo, por lo tanto D = 3

pair<int,int> deltas[4] = {
    {-1, 0}, // Arrriba
{0, -1},   {0, 1}, // Izquierda y derecha
    {1, 0}   // Abajo
};

int main () {	
    int n, m; cin>>n>>m;

    pair<int,int> A, B;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>mat[i][j];

            // Registro la posición de A
            if(mat[i][j] == 'A')
                A = {i, j};

            // Registro la posición de B
            if(mat[i][j] == 'B')
                B = {i, j};
        }
    }

    auto isInside = [&](int x, int y){
        return (0 <= x && x < n && 0 <= y && y < m);
    };

    memset(dist, -1, sizeof(dist));
    queue< pair<int,int> > q;

    q.push(A);
    dist[A.first][A.second] = 0;

    while(!q.empty()){
        auto [x, y] = q.front(); q.pop();
        
        for(auto [dx, dy]: deltas){
            if(isInside(x+dx, y+dy) && mat[x+dx][y+dy] != '#' && dist[x+dx][y+dy] == -1){
                dist[x+dx][y+dy] = dist[x][y] + 1;

                if(dx == -1) {
                    to_move[x+dx][y+dy] = U;
                } else if(dx == 1) {
                    to_move[x+dx][y+dy] = D;
                } else if(dy == -1){
                    to_move[x+dx][y+dy] = L;
                } else {
                    to_move[x+dx][y+dy] = R;
                }

                q.push({x+dx, y+dy});
            }
        }
    }

    if(dist[B.first][B.second] == -1){
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;
    cout << dist[B.first][B.second] << endl;

    
    auto [curr_i, curr_j] = B;
    int shortest_distance = dist[B.first][B.second];
    string path;
    for(int i = 0; i < shortest_distance; i++){
        int move_to_do = to_move[curr_i][curr_j];
        if(move_to_do == L) { 
            // Significa que donde estoy actualmente me tuve mover a la izquierda (L), por lo tanto el elemento previo está a mi derecha
            curr_j++;


            path.push_back('L');
        } else if(move_to_do == R){
            // Significa que donde estoy actualmente me tuve mover a la derecha (R), por lo tanto el elemento previo está a mi izquierda
            curr_j--;


            path.push_back('R');
        } else if(move_to_do == D){
            // Significa que donde estoy actualmente me tuve mover hacia abajo (D), por lo tanto el elemento previo está encima
            curr_i--;


            path.push_back('D');
        } else { // move_to_do == U

            // Significa que donde estoy actualmente me tuve mover hacia arriba (U), por lo tanto el elemento previo está debajo
            curr_i++;


            path.push_back('U');
        }
    }

    // Como va a estar al revés (porque me estoy yendo desde B a A)
    // Le hacemos un reverse a la respuesta
    reverse(all(path));

    cout << path << endl;


	return 0;
}


