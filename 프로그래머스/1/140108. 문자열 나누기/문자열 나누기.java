class Solution {
    public int solution(String s) {
        int answer = 0;
        Character x = null;
        int count1 = 0;
        int count2 = 0;
        
        for (int i = 0; i < s.length(); i++)
        {
            char currentChar = s.charAt(i);
            
            if (x == null)
            {
                x = currentChar;
                count1 = 1;
            }
            else if (x == currentChar)
            {
                count1++;
            }
            else
            {
                count2++;
            }
            
            if (count1 == count2)
            {
                answer++;
                count1 = 0;
                count2 = 0;
                x = null;
            }
        }
        
        if (count1 != 0 || count2 != 0)
        {
            answer++;
        }
        
        return answer;
    }
}