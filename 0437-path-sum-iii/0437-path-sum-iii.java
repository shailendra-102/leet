/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {

    public int pathSum(TreeNode root, int targetSum) {
        Map<Long, Integer> map = new HashMap<>();
        map.put(0L, 1);
        return dfs(root, targetSum, 0L, map);
    }

    private int dfs(TreeNode node, int targetSum, long currSum,
                    Map<Long, Integer> map) {

        if (node == null) {
            return 0;
        }

        currSum += node.val;
        int count = map.getOrDefault(currSum - targetSum, 0);
        map.put(currSum, map.getOrDefault(currSum, 0) + 1);
        count += dfs(node.left, targetSum, currSum, map);
        count += dfs(node.right, targetSum, currSum, map);
        map.put(currSum, map.get(currSum) - 1);

        return count;
    }
}