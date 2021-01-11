public int find(int parent[], int key){
      if(parent[key] == -1){
           return key;
      }
            
      return find(parent, parent[key]);
}
        
public void union(int parent[], int x, int y){
      int xset = find(parent, x);
      int yset = find(parent, y);
            
      parent[yset] = xset;
}
