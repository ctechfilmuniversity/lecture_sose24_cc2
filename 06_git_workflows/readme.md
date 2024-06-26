**Creative Coding II**

Prof. Dr.-Ing. Angela Brennecke | a.brennecke@filmuniversitaet.de | Film University Babelsberg *KONRAD WOLF*   
Anna Brauwers | anna.s.brauwers@filmuniversitaet.de | Film University Babelsberg *KONRAD WOLF*

---

# Git Workflows

In this session of Creative Coding II, we will take a small detour to recap and review Git. In particular, we will do several exercises to illustrate and understand the different concepts of Git's version control, such as

- the difference between HEAD, main, origin/main, and remotes/origin/main
- how to branch off and merge back in
- the difference between staging and commits
- Github Desktop vs Git in VSCode vs Git on the command line
- Git log and git history 

---

In Git, `main`, `origin/main`, `HEAD`, and `origin/HEAD` represent different references and pointers within your repository. Understanding the differences between these terms is crucial for effectively managing and navigating your Git repository. Here's a detailed explanation of each:

### `main`

- **Local Branch**: `main` refers to a branch in your local Git repository.
- **Current Branch State**: It points to the latest commit in the `main` branch of your local repository.
- **Default Branch**: By convention, `main` (formerly `master`) is typically the default branch for a repository, representing the primary line of development.

### `origin/main`

- **Remote Tracking Branch**: `origin/main` is a remote-tracking branch that tracks the state of the `main` branch in the remote repository named `origin`.
- **Last Fetched State**: It represents the state of the remote `main` branch the last time you fetched or pulled from the remote repository.
- **Synchronization**: It helps you keep track of changes in the remote repository and allows you to compare your local branch with the remote one.

### `HEAD`

- **Current Commit Pointer**: `HEAD` is a special reference that points to the current commit checked out in your working directory.
- **Branch or Commit**: `HEAD` typically points to the latest commit on the currently checked-out branch, but it can also point directly to a specific commit (detached HEAD state).
- **Contextual**: When you switch branches, `HEAD` moves to point to the tip of the new branch.

### `origin/HEAD`

- **Symbolic Reference**: `origin/HEAD` is a symbolic reference that points to the default branch of the remote repository named `origin`.
- **Default Branch Indicator**: It indicates which branch the remote repository considers its default branch. This is typically `main` or `master`, but it can be any branch that the remote repository is configured to use as its default.
- **Repository Cloning**: When you clone a repository, `origin/HEAD` helps Git determine which branch to check out initially.

### Relationships and Usage

- **Switching Branches**: When you switch to `main` using `git checkout main`, `HEAD` updates to point to the latest commit on `main`.
- **Merging**: When you merge `origin/main` into your local `main`, you incorporate changes from the remote branch into your local branch.
- **Fetching**: Running `git fetch origin` updates your remote tracking branches (like `origin/main`) with the latest changes from the remote repository without altering your working directory or local branches.
- **Default Branch Determination**: `origin/HEAD` helps in determining the default branch during cloning and fetch operations, ensuring your local Git environment accurately reflects the structure of the remote repository.

### Example Commands

1. **View all branches and their references**:

    ```sh
    git branch -a
    ```

2. **Fetch the latest changes from the remote repository**:

    ```sh
    git fetch origin
    ```

3. **Check the current branch and its reference**:

    ```sh
    git status
    ```

4. **View the symbolic reference of `origin/HEAD`**:

    ```sh
    git symbolic-ref refs/remotes/origin/HEAD
    ```

By understanding these terms and their relationships, you can better manage your branches and ensure your local repository stays in sync with the remote repository.

---

## Exercises

Exercises will be presented and conducted in class. For an additional exercise, fork the newly created Snake Game branch

- https://github.com/abrennec/cc2_snake_game_dev/

## Further Resources

- [Git book](https://git-scm.com/book/de/v2)
- [Git branching](https://learngitbranching.js.org/?locale=de_DE)
