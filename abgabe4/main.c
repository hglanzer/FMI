#define N 5
#define K 0

void main() {

  bool G[N][N] = { 
     {0, 1, 0, 0, 1}, 
     {0, 0, 1, 0, 0},
     {0, 1, 0, 1, 0},
     {1, 0, 0, 0, 0},
     {0, 0, 0, 0, 1}, 
  };

  bool result = 1;
  int node = 0;
  for(i = 0; i < K, i++) {
      int next = nondet() % N;
      result = result && G[node][next];
      node = next;
  }
   
  result = result && (node == 0) && (K > 0);
   
  assert(!result);
  
}

