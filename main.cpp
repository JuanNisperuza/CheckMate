#include <bits/stdc++.h> 
using namespace std; 
bool checkCheckMate(pair<int, int> a[], int n, int kx, int ky) 
{ 
    map<pair<int, int>, int> mpp; 
    for (int i = 0; i < n; i++) { 
        int x = a[i].first; 
        int y = a[i].second; 
        int pawn(int x,int y,int x1,int y1);
        int horse(int x,int y,int x1,int y1);
        int rooke(int x,int y,int x1,int y1);
        int bishop(int x,int y,int x1,int y1);
        int queen(int x,int y,int x1,int y1);
        int king(int x,int y,int x1,int y1);
  
        mpp[{ x, y }] = 1; 
  
        mpp[{ x - 2, y + 1 }] = 1; 
  
        mpp[{ x - 2, y - 1 }] = 1; 
  
        mpp[{ x + 1, y + 2 }] = 1; 
  
        mpp[{ x + 1, y - 2 }] = 1; 
  
        mpp[{ x - 1, y + 2 }] = 1; 
  
        mpp[{ x + 2, y + 1 }] = 1; 
  
        mpp[{ x + 2, y - 1 }] = 1; 
  
        mpp[{ x - 1, y - 2 }] = 1; 
    } 
  
    for (int i = -1; i < 2; i++) { 
        for (int j = -1; j < 2; j++) { 
            int nx = kx + i; 
            int ny = ky + j; 
            if (i != 0 && j != 0) { 
                if (!mpp[{ nx, ny }]) { 
                    return true; 
                } 
            } 
        } 
    } 
    return false; 
} 
  

int main() 
{ 
    pair<int, int> a[] = { { 1, 0 }, { 0, 2 }, { 2, 5 },  
                           { 4, 4 }, { 5, 0 }, { 6, 2 }}; 
  
    int n = sizeof(a) / sizeof(a[0]); 
  
    int x = 3, y = 2; 
    if (checkCheckMate(a, n, x, y)) 
        cout << "Not Checkmate!"; 
    else
        cout << "Yes its checkmate!"; 
  
    return 0; 
} 
