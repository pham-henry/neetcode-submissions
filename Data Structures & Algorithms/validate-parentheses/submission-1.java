class Solution {
    public boolean isValid(String s) {
        Stack<Character> res = new Stack();
        char cur; 

        for (int i =0; i < s.length(); i++) {
            cur = s.charAt(i);
            if (cur == '(' || cur == '{' || cur == '[') {
                res.push(cur);
            }
            else {
                if (res.isEmpty()) {
                    return false;
                }
                switch(cur) {
                    case ')':
                        if (res.pop() != '(') {
                            return false;
                        }
                        break;
                    case '}':
                        if (res.pop() != '{') {
                            return false;
                        }
                        break;
                    case ']':
                        if (res.pop() != '[') {
                            return false;
                        }
                        break;
                }
            }
        }

        if (res.isEmpty()) {
            return true;
        }

        return false;
    }
}
