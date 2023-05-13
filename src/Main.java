public class Main {
    public static void main(String[] args) {
        int[][] maps = {{1,0,1,1,1}, {1,0,1,0,1}, {1,0,1,1,1}, {1,1,1,0,1}, {0,0,0,0,1}};
        GameMap s = new GameMap();
        s.solution(maps);

//        GameMap2 s = new GameMap2();
//        System.out.println(s.solution(maps));
    }
}