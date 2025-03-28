class treeNode():
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

    def treeNode(self, val=0):
        self.val = val
        self.left = None
        self.right = None
        return self
    
    def buildTree(arr, idx=0):
        if idx >= len(arr) or arr[idx] is None:
            return None
        
        root = treeNode(arr[idx])
        root.left = treeNode.buildTree(arr, 2*idx + 1)
        root.right = treeNode.buildTree(arr, 2*idx + 2)

        return root
    
    def invertTree(root):
        if not root:
            return
        
        tempNode = root.left
        root.left = root.right
        root.right = tempNode

        treeNode.invertTree(root.left)
        treeNode.invertTree(root.right)

        return

if __name__ == '__main__':
    p = [1,2,3,4,5,6,7]
    root = treeNode.buildTree(p)
    treeNode.invertTree(root)
