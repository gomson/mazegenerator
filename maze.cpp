/*  maze.cpp:
 *  Generates a maze of arbitrary size using all maze generation algorithms
 *
 */

# include <vector>
# include "mazebase.h"
# include "kruskal.h"
# include "dfs.h"
# include "prim.h"

int main()
{
  //Dimensions of the maze
  int H,W;

  //2D character array to store the maze
  std::vector<std::vector<char>> v;

  //Read the dimensions of the grid
  scanf("%d%d",&H,&W);

  //Generate maze using Kruskal's algorithm
  Kruskal_createmaze(H,W,v);
  plot(H,W,v,"out/kruskal");

  //Generate maze using DFS
  v.clear();
  DFS_createmaze(H,W,v);
  plot(H,W,v,"out/dfs");

  //Generate maze using Prim's algorithm
  v.clear();
  Prim_createmaze(H,W,v);
  plot(H,W,v,"out/prim");

  return 0;
}

