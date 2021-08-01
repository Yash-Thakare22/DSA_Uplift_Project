class Solution {
    public int countMatches(List<List<String>> items, String ruleKey, String ruleValue) {
        int count = 0;
        // loop through the items
        for(List<String> list : items) {
            if(ruleKey.equals("type") && ruleValue.equals(list.get(0))) count++;
            else if(ruleKey.equals("color") && ruleValue.equals(list.get(1))) count++;
            else if(ruleKey.equals("name") && ruleValue.equals(list.get(2))) count++;
        }
        return count;
    }
}