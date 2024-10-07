public class binaryTree {
    public static void main(String[] args) {

        // Binary Search Tree = a tree data structure, where each node is gerater than it's left child, but less than it's right. 
        // benifit: easy to locate a node when they are in this order
        // time complexity: best o(log n)
        //                  worst 0(n)
        // space complexity: 0(n)

        BinarySearchTree tree = new BinarySearchTree();
        tree.insert(new Node(5));
        tree.insert(new Node(8));
        tree.insert(new Node(3));
        tree.insert(new Node(13));
        tree.insert(new Node(76));
        tree.insert(new Node(9));
        tree.insert(new Node(10));
        tree.insert(new Node(4));

        tree.remove(0);
        tree.display();

        System.out.println(tree.search(76));

        tree.remove(0);
    }
}