
**Creative Coding II**

Prof. Dr.-Ing. Angela Brennecke | a.brennecke@filmuniversitaet.de | Film University Babelsberg *KONRAD WOLF*    
Anna Brauwers | anna.s.brauwers@filmuniversitaet.de | Film University Babelsberg *KONRAD WOLF*

---

**Table of Contents**
1. [Some Notes on Git Related Development](#some-notes-on-git-related-development)
2. [Issues When Merging](#issues-when-merging)
      1. [Options to Reconcile Divergent Branches](#options-to-reconcile-divergent-branches)
      2. [How to Configure Git](#how-to-configure-git)
      3. [Overriding the Configured Default](#overriding-the-configured-default)
      4. [Example Commands](#example-commands)
      5. [What `git rebase` Does](#what-git-rebase-does)
      6. [Example Scenario](#example-scenario)
      7. [Benefits of `git rebase`](#benefits-of-git-rebase)
      8. [Risks and Considerations](#risks-and-considerations)
      9. [Practical Usage](#practical-usage)
      10. [Summary](#summary)
      11. [Detailed Explanation](#detailed-explanation)
          1. [1. Base Commit in Merging](#1-base-commit-in-merging)
          2. [2. Base Commit in Rebasing](#2-base-commit-in-rebasing)
      12. [Identifying the Base Commit](#identifying-the-base-commit)
      13. [Importance of the Base Commit](#importance-of-the-base-commit)
      14. [Practical Example](#practical-example)
      15. [Summary](#summary-1)
3. [Reading Material](#reading-material)

--- 

# Some Notes on Git Related Development

In order to collaborate as developers, it is recommended to start working with branches. This branching model illustrates how git can be used to develop different features in individual branches and merge them together.

![a git branching model](../imgs/git_branching_model.png)
Image reference: https://nvie.com/posts/a-successful-git-branching-model/


# Issues When Merging

The following information was generated with the help of ChatGPT. 

Q: How to solve this problem that occurs when merging two branches that have diverged: 

```git
hint: You have divergent branches and need to specify how to reconcile them.
hint: You can do so by running one of the following commands sometime before
hint: your next pull:
hint:
hint:   git config pull.rebase false  # merge
hint:   git config pull.rebase true   # rebase
hint:   git config pull.ff only       # fast-forward only
hint:
hint: You can replace "git config" with "git config --global" to set a default
hint: preference for all repositories. You can also pass --rebase, --no-rebase,
hint: or --ff-only on the command line to override the configured default per
hint: invocation."
```

A: When you encounter divergent branches and need to reconcile them in Git, you have several options for how to handle the merge. Here’s an explanation of each method and how to configure your Git settings to use one of these methods by default:

### Options to Reconcile Divergent Branches

1. **Merge**: This is the default method where a new commit is created to combine the changes from the two branches.
   ```sh
   git config pull.rebase false
   ```
   **Pros**:
   - Maintains the history of all branches.
   - Simple and straightforward.

   **Cons**:
   - The history can become cluttered with merge commits.

2. **Rebase**: This method rewrites the commit history so that your changes appear on top of the changes from the branch you are rebasing onto.
   ```sh
   git config pull.rebase true
   ```
   **Pros**:
   - Creates a linear history without merge commits.
   - Makes it easier to follow the project history.

   **Cons**:
   - Rewriting history can be dangerous if not done carefully (e.g., it can cause problems for collaborators).

3. **Fast-Forward Only**: This method only updates the branch if it can be fast-forwarded. If there are divergent changes, the pull will fail.
   ```sh
   git config pull.ff only
   ```
   **Pros**:
   - Ensures a clean, linear history.
   - Prevents unwanted merges or rebases.

   **Cons**:
   - Fails if a fast-forward merge is not possible, requiring manual intervention.

### How to Configure Git

To set a default pull strategy for a single repository, use:
```sh
git config pull.rebase false  # for merge
git config pull.rebase true   # for rebase
git config pull.ff only       # for fast-forward only
```

To set a global default pull strategy for all repositories, use:
```sh
git config --global pull.rebase false  # for merge
git config --global pull.rebase true   # for rebase
git config --global pull.ff only       # for fast-forward only
```

### Overriding the Configured Default

You can also override the default configuration on a per-invocation basis by using the following options with the `git pull` command:
- `--rebase`: Pull with rebase.
  ```sh
  git pull --rebase
  ```
- `--no-rebase`: Pull without rebase (merge).
  ```sh
  git pull --no-rebase
  ```
- `--ff-only`: Pull with fast-forward only.
  ```sh
  git pull --ff-only
  ```

### Example Commands

Here are some examples of how to set and use these configurations:

- **Set merge as default (local repository)**:
  ```sh
  git config pull.rebase false
  ```

- **Set rebase as default (global)**:
  ```sh
  git config --global pull.rebase true
  ```

- **Set fast-forward only as default (global)**:
  ```sh
  git config --global pull.ff only
  ```

- **Override default to use rebase for a single pull**:
  ```sh
  git pull --rebase
  ```

Choose the method that best fits your workflow and team collaboration style.


--- 

Q: What does `git rebase` mean?

A: In Git, `rebase` is a powerful feature that allows you to move or combine a sequence of commits to a new base commit. The primary purpose of rebasing is to create a linear, more understandable project history. It’s commonly used to integrate changes from one branch into another without creating a merge commit.

### What `git rebase` Does

When you rebase, you change the base commit of your current branch to another commit. Essentially, it reapplies your commits on top of another base commit. Here’s a step-by-step breakdown:

1. **Identify the base commit**: Git determines the common ancestor of the branch you are rebasing onto and your current branch.
2. **Create new commits**: Git temporarily removes your commits and re-applies them one by one on top of the new base commit.
3. **Move the branch pointer**: Git updates the branch pointer to point to the newly created commits.

### Example Scenario

Assume you have the following commit history:
```
A---B---C feature
     /
D---E---F---G main
```
Here, `D` is the common ancestor, `A`, `B`, and `C` are commits on the `feature` branch, and `E`, `F`, and `G` are commits on the `main` branch.

If you run `git rebase main` from the `feature` branch, Git will:
1. Identify `D` as the common ancestor.
2. Temporarily set aside commits `A`, `B`, and `C`.
3. Apply the changes from `E`, `F`, and `G` (i.e., replay the commits from `main`).
4. Reapply commits `A`, `B`, and `C` on top of `G`.

The new commit history will look like this:
```
D---E---F---G---A'---B'---C' feature
```
`A'`, `B'`, and `C'` are new commits that correspond to the original `A`, `B`, and `C` but have new hashes because their base commit has changed.

### Benefits of `git rebase`

- **Linear History**: Rebasing results in a straight, linear project history, making it easier to follow and understand.
- **Clean Merges**: Since rebasing integrates changes without merge commits, it avoids the clutter of multiple merge commits.

### Risks and Considerations

- **Rewrite History**: Rebasing changes commit hashes and rewrites history, which can be problematic if the branch has been shared with others. It can lead to conflicts and duplicate commits if not handled carefully.
- **Lost Context**: Some argue that merge commits provide useful context about how changes were integrated, which rebasing removes.

### Practical Usage

To perform a rebase, you can use the following commands:

- **Rebase onto another branch**:
  ```sh
  git checkout feature
  git rebase main
  ```

- **Interactive Rebase**: This allows you to edit, squash, or reorder commits during the rebase process:
  ```sh
  git rebase -i main
  ```

- **Abort a Rebase**: If you encounter conflicts or want to stop the rebase process, you can abort it:
  ```sh
  git rebase --abort
  ```

- **Continue a Rebase**: If you have resolved conflicts during a rebase, you can continue:
  ```sh
  git rebase --continue
  ```

### Summary

`git rebase` is a powerful tool for creating a clean, linear history by moving your branch’s commits to a new base commit. It’s useful for integrating changes and maintaining a clear project history but must be used carefully to avoid disrupting shared work.

--- 

Q: What is a `base commit`?

A: A base commit in Git is the commit from which a particular branch or set of commits diverges. It serves as the common ancestor between branches and is the starting point for comparison or operations like merging and rebasing.

### Detailed Explanation

#### 1. Base Commit in Merging

When you merge two branches, Git identifies the base commit (also known as the merge base) as the common ancestor of the two branches being merged. This helps Git understand what changes have been made on each branch since they diverged.

For example, consider the following commit history:

```
       G---H---I feature
      /
A---B---C---D---E---F main
```

Here, `C` is the base commit for the `main` and `feature` branches. It’s the most recent common ancestor of both branches. When you merge `feature` into `main`, Git uses `C` as the reference point to understand the changes that occurred in both branches.

#### 2. Base Commit in Rebasing

When you rebase a branch onto another branch, Git uses the base commit as the starting point to reapply the changes from the current branch onto the target branch.

Consider the same commit history:

```
       G---H---I feature
      /
A---B---C---D---E---F main
```

If you rebase `feature` onto `main`, Git identifies `C` as the base commit and re-applies commits `G`, `H`, and `I` on top of `F`, resulting in:

```
A---B---C---D---E---F---G'---H'---I' feature
```

Here, `G'`, `H'`, and `I'` are new commits that reflect the changes from `G`, `H`, and `I` but are based on commit `F`.

### Identifying the Base Commit

Git automatically identifies the base commit using the commit graph and the concept of common ancestors. You can manually find the base commit using the following command:

```sh
git merge-base <branch1> <branch2>
```

This command outputs the SHA-1 hash of the common ancestor (base commit) of the two specified branches.

### Importance of the Base Commit

- **Conflict Resolution**: When merging or rebasing, understanding the base commit helps in resolving conflicts by comparing changes made since the common ancestor.
- **History Simplification**: It’s crucial for operations like `git rebase`, which aim to create a linear commit history by moving or reapplying commits.
- **Accurate Diffs**: Identifying the base commit ensures that the diffs and patches are correctly calculated, reflecting the actual changes between branches.

### Practical Example

Consider you have the following branches:

- `main` branch with commits `A`, `B`, `C`, `D`.
- `feature` branch created from `B` and then further developed with commits `E`, `F`.

Commit history:

```
A---B---C---D (main)
     \
      E---F (feature)
```

Here, `B` is the base commit. If you want to rebase `feature` onto `main`, Git will:

1. Identify `B` as the base commit.
2. Temporarily remove commits `E` and `F`.
3. Apply commits `C` and `D` from `main`.
4. Reapply commits `E` and `F` on top of `D`.

The new commit history will look like:

```
A---B---C---D---E'---F' (feature)
```

In this new history, `E'` and `F'` are the rebased versions of `E` and `F`, now based on `D`.

### Summary

A base commit is a crucial concept in Git that represents the common ancestor of branches. It is used in various Git operations like merging and rebasing to determine how to combine or reapply changes. Understanding and correctly identifying the base commit is essential for effective version control and conflict resolution.


# Reading Material

- [A sucessful branching model](https://nvie.com/posts/a-successful-git-branching-model/): 
- [Learn Git Branching](https://learngitbranching.js.org/?locale=de_DE)
- [Git Branching](https://git-scm.com/book/de/v2/Git-Branching-Branches-auf-einen-Blick)