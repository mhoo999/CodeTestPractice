import java.util.*;

class Solution {
    public int[] solution(String[] keymap, String[] targets) {
        int[] answer = new int[targets.length];
        
        Map<Character, Integer> charMinClicks = new HashMap<>();

        for (String keys : keymap) {
            for (int i = 0; i < keys.length(); i++) {
                char c = keys.charAt(i);
                charMinClicks.put(c, Math.min(charMinClicks.getOrDefault(c, Integer.MAX_VALUE), i + 1));
            }
        }
        
         for (int i = 0; i < targets.length; i++) {
            String target = targets[i];
            int totalClicks = 0;
            boolean isPossible = true;

            for (char c : target.toCharArray()) {
                if (charMinClicks.containsKey(c)) {
                    totalClicks += charMinClicks.get(c);
                } else {
                    isPossible = false;
                    break;
                }
            }

            answer[i] = isPossible ? totalClicks : -1;
        }
        
        return answer;
    }
}