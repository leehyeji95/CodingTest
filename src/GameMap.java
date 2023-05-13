import java.awt.*;
import java.util.LinkedList;
import java.util.Queue;

class GameMap {
    static int[] dx = {0,-1,0,1};
    static int[] dy = {1,0,-1,0};
    static boolean[][] visited;
    int n,m;
//    int a,b;
    static int answer = 0;
    public int solution(int[][] maps) {
        n = maps.length;
        m = maps[0].length;
        visited = new boolean[n][m];

        // 상대진영 벽
        if(maps[n-2][m-1] == 0 && maps[n-1][m-2] == 0) {
            answer = -1;
            return answer;
        }

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(maps[i][j] == 1 && !visited[i][j]) {
//                    dfs(maps, i, j);
                    bfs(maps, i, j);
                }
            }
        }

//        System.out.println("A: "+a+", B: "+b);
//        answer = Math.min(a, b);
        System.out.println("정답: "+ answer);
        return answer;
    }

    public void dfs(int[][] maps, int x, int y) {
        visited[x][y] = true;

        for(int i=0; i<4; i++) {
            int ax = x + dx[i];
            int ay = y + dy[i];

            if(ax < 0 || ay < 0 || ax >= n || ay >= m) continue;

            if(maps[ax][ay] == 1 && !visited[ax][ay]) {
                dfs(maps, ax, ay);
                answer++;
            }
        }
    }

    public void bfs(int[][] maps, int x, int y) {
        Queue<Node> q = new LinkedList<>();
        System.out.println("bfs!!!!");

        q.offer(new Node(x, y, 1));
        visited[x][y] = true;

        while(!q.isEmpty()) {
            Node p = q.poll();
            if(p.x == n-1 && p.y == m-1) {

                System.out.println("!!!1p"+ p.toString());
            }

            for (int i = 0; i < 4; i++) {
                int ax = p.x + dx[i];
                int ay = p.y + dy[i];

                if (ax < 0 || ay < 0 || ax >= n || ay >= m) continue;

                if (maps[ax][ay] == 1 && !visited[ax][ay]) {

                    q.offer(new Node(ax, ay, p.cost+1));
                    visited[ax][ay] = true;
                }
            }
        }
    }
}
class Node {
    int x;
    int y;
    int cost;

    public Node(int x, int y, int cost) {
        this.x = x;
        this.y = y;
        this.cost = cost;
    }

    @Override
    public String toString() {
        return "Node{" +
                "x=" + x +
                ", y=" + y +
                ", cost=" + cost +
                '}';
    }
}