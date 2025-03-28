class treeNode():
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
    
    def buildTree(arr, idx=0):
        if idx >= len(arr) or arr[idx] is None:
            return None
        
        root = treeNode(arr[idx])
        root.left = treeNode.buildTree(arr, 2*idx + 1)
        root.right = treeNode.buildTree(arr, 2*idx + 2)

        return root
    
    def findMaxDepth(root, dep=0):
        if not root:
            return dep
        dep+=1

        return max(treeNode.findMaxDepth(root.left, dep), treeNode.findMaxDepth(root.right, dep))
        

if __name__ == '__main__':
    p = [1, None, 2, 3, 5, None, 4]
    root = treeNode.buildTree(p, 0)

    temp = treeNode.findMaxDepth(root)
    print(temp)
