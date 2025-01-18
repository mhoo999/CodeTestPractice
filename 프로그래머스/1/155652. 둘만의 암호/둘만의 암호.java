class Solution {
    public String solution(String s, String skip, int index) {
        StringBuilder answer = new StringBuilder();
        String skipSet = skip;
        
        for (char a : s.toCharArray()) {
            int step = 0;
            
            while (step < index) {
                a++;
                if (a > 'z') {
                    a = 'a';
                }
                if (!skipSet.contains(String.valueOf(a))) {
                    step++;
                }
            }
            answer.append(a);
        }
        
        return answer.toString();
    }
}