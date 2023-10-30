class TreeNode():
    def __init__(self):
        self.left = None
        self.data = None
        self.right = None

node1 = TreeNode()
node1.data = "화사"

node2 = TreeNode()
node2.data = "솔라"
node1.left = node2

node3 = TreeNode()
node3.data = "문별"
node1.right = node3

print(node1.data, node2.data, node3.data)