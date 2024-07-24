<!-- Created with the help of Github and ChatGPT -->

# Github steps 

## Set up repo

Create a local folder and add the code and other files that you would like to share with your team. Setting up the repo might look like this:

````
cd /your-project-folder
echo "This is my readme text" >> README.md
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/abrennec/cc2_snake_game_dev.git
git push -u origin main
`````

Share the repo with your team, i.e., add collaborators.

## Working with a branch

**Create a new branch** using the `git branch` command, or switch to a new branch directly with `git checkout -b`.

````
git checkout -b new-branch-name
````

**Push the new branch** to the remote repository using the `git push` command with the `-u` option to set the upstream branch.

````
git push -u origin new-branch-name
````

**Verify the branch is tracking the remote branch and list all branches, local and remote**:

```sh
git branch -vv
git branch -va
```


**Delete the local branch**:

```sh
git branch -d feature-branch
```

If the branch has unmerged changes and you want to force delete:

```sh
git branch -D feature-branch
```

**Delete the remote branch**:

```sh
git push origin --delete feature-branch
```


## Make code changes

-- 

## Merge code 

Merging a branch in Git involves combining the changes from one branch into another. Here are the steps to merge a branch:

### Step 1: Switch to the Target Branch
First, switch to the branch where you want to merge the changes. Typically, this is the main branch or another feature branch.

```sh
git checkout main
```

### Step 2: Merge the Branch
Use the `git merge` command to merge the desired branch into the target branch. For example, to merge a branch named `feature-branch` into the `main` branch:

```sh
git merge feature-branch
```

### Handling Merge Conflicts
If there are conflicts during the merge, Git will prompt you to resolve them. Conflicts occur when changes in the branches being merged affect the same parts of the same files.

1. **Identify Conflicts**:
   Git will mark the conflicted areas in the files. You can use a Git GUI tool or a text editor to resolve them.

2. **Resolve Conflicts**:
   Edit the files to resolve the conflicts. Once resolved, mark the conflicts as resolved:

   ```sh
   git add resolved-file.txt
   ```

3. **Complete the Merge**:
   After resolving all conflicts, complete the merge with:

   ```sh
   git commit
   ```

### Example Workflow
Here’s a complete example of merging a branch named `feature-branch` into the `main` branch:

1. **Switch to the target branch**:

    ```sh
    git checkout main
    ```

2. **Merge the feature branch**:

    ```sh
    git merge feature-branch
    ```

3. **Resolve any merge conflicts** if prompted:

    ```sh
    # Edit conflicted files, then mark as resolved
    git add resolved-file.txt
    ```

4. **Complete the merge**:

    ```sh
    git commit
    ```

### Optional: Push the Changes to the Remote Repository
If you want to push the merged changes to a remote repository, use:

```sh
git push origin main
```

By following these steps, you can successfully merge branches in Git, handling any conflicts that arise and ensuring the combined changes are integrated into your target branch.