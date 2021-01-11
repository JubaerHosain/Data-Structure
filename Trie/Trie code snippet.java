import java.util.Map;
import java.util.HashMap;

public class Main {
    static class TrieNode {
        Map<Character, TrieNode> children;
        boolean ennOfWord;
        public TrieNode() {
            children = new HashMap<>();
            ennOfWord = false;
        }
    }
    
    //Insert by iteration
    public static void insert(TrieNode root, String word) {
        TrieNode curr = root;
        
        for(char ch: word.toCharArray()) {
            TrieNode node = curr.children.get(ch);
            if(node == null) {
                node = new TrieNode();
                curr.children.put(ch, node);
            }
            curr = node;
        }
        
        curr.ennOfWord = true;
    }
    
    //Insert by recursion
    public static void insert(TrieNode root, String word, int index) {
        if(index == word.length()) {
            root.ennOfWord = true;
            return;
        }
        
        char ch = word.charAt(index);
        TrieNode node = root.children.get(ch);
        if(node == null) {
            node = new TrieNode();
            root.children.put(ch, node);
        }
        
        insert(node, word, index+1);
    }
    
    //Search by iteration
    public static boolean search(TrieNode root, String word) {
        TrieNode curr = root;
        
        for(char ch: word.toCharArray()) {
            TrieNode node = curr.children.get(ch);
            if(node == null) {
                return false;
            }
            curr = node;
        }
        
        return curr.ennOfWord;
    }
    
    //Search by recursion
    public static boolean search(TrieNode root, String word, int index) {
        if(index == word.length()) {
            return root.ennOfWord;
        }
        
        char ch = word.charAt(index);
        TrieNode node = root.children.get(ch);
        if(node == null) {
            return false;
        }
        
        return search(node, word, index+1);
    }
    
	public static void main(String[] args) {
	    System.out.println("Hello Jubaer Hosain");
	    
	    TrieNode root = new TrieNode();
	    String keys[] = {"Habibur", "Jubaer", "Sajidur", "Mahbubur", "Khatibun", "Ruhunnahar", "Kushnahar", "Nilima"};
	    for(String word: keys) {
	        insert(root, word);
	    }
	    
	    String word = "Habibur";
	    System.out.println(word + " " + search(root, word));
	    word = "Habib";
	    System.out.println(word + " " + search(root, word));
	    word = "Habibur Rahman";
	    System.out.println(word + " " + search(root, word));
	    word = "Nilima";
	    System.out.println(word + " " + search(root, word));
	}
}





