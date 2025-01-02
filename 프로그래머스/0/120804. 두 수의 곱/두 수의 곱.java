import java.util.Scanner;

class Solution {
    public int solution(int num1, int num2) {
        return num1 * num2;
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int num1 = sc.nextInt();
        int num2 = sc.nextInt();
        
        Solution solution = new Solution();
        int result = solution.solution(num1, num2);
        
        System.out.println(result);
    }
}