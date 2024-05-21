**Creative Coding II**

Prof. Dr.-Ing. Angela Brennecke | a.brennecke@filmuniversitaet.de | Film University Babelsberg *KONRAD WOLF*   
Anna Brauwers | anna.s.brauwers@filmuniversitaet.de | Film University Babelsberg *KONRAD WOLF*


---
For this GitHub guide we partially used Prof. Dr. Lena Giesekes guide for the Creative Coding I course.

# Git & GitHub

## Git
[Git](https://git-scm.com/) is a version control system that allows you to track changes in your files. It was created by Linus Torvalds, the creator of the Linux operating system.

We will use Git to manage this class and your projects. You'll add your assignments to this repository and submit them by pushing your changes to GitHub.
You'll find each weeks syllabus, code examples and assignments in this repository.
In order to work with GitHub, you need to install Git on your computer and understand the basic workflow.

### Git Terminology
- **Repository**: A directory where your projects live.
- **Staging**: The process of preparing files for a commit.
- **Commit**: The action of storing the staged files in the repository.
- **Branch**: A separate line of development in your project.
- **Master**: The main branch of your repository.
- **Conflicts**: Occur when two versions of the same file have different changes.

### Git Basic Workflow
1. Initialize a directory as a Git repository.
2. Work on files.
3. Add the files that you want to commit to the stage.
4. Commit the staged files to the repository.
5. Repeat steps 2-4 as needed.

## GitHub
[GitHub](https://github.com/) is an online platform for hosting and collaborating on Git repositories.

### GitHub Terminology
- **Pull**: Fetching the latest changes from an online repository to your local one.
- **Push**: Sending your local changes to the online repository.
- **Origin**: The default name for the remote repository where you want to publish your commits.

### GitHub Basic Workflow
1. Pull the latest changes from the online repository.
2. Work on files.
3. Add the files that you want to commit to the stage.
4. Commit the staged files to your local repository.
5. Push the commit to the online repository.
6. Repeat steps 1-5 as needed.


### Setting up Git and GitHub
1. Install Git on your computer

    **macOS**:
    
    Open the terminal and type:
    ```bash
    git --version
    ```
    If you don't have Git installed, you'll be prompted to install it. Follow the instructions to install Git.
    
    **Windows**:
    
    Download Git from [here](https://git-scm.com/download/win) and install it.

2. If you don't have one, create a GitHub account: [Join GitHub](https://www.google.com/url?sa=t&source=web&rct=j&opi=89978449&url=https://github.com/join&ved=2ahUKEwjnj9XIrZyGAxUdhP0HHYvOD0gQFnoECAYQAQ&usg=AOvVaw0H9TK-nu7JfXaoNeNMgJEk)
3. Configure Git with your name and email address in the Terminal/Command window:
```bash
git config --global user.name "Your Name"
git config --global user.email "
```
4. Clone this repository to your computer:
direct to the folder where you want to clone the repository:
```bash
cd path/to/your/folder
```
5. Then clone the repository:
```bash
git clone https://github.com/ctechfilmuniversity/lecture_sose24_cc2.git
```
Now you have the repository on your computer and can look at files, edit them or add new ones.

The repository will change during the semester, so you should regularly pull the latest changes from the online repository to your local one. 
```bash
git pull
```
If you want to add a new file to the repository, you need to stage it first:
```bash
git add path/to/your/file
```
Then commit the file to the repository:
```bash
git commit -m "Add your message here"
```
Finally, push the commit to the online repository:
```bash
git push
```
If you have any questions or problems, feel free to ask Angela or Anna.

To add files and look at the repository we're using Visual Studio Code. This is the same IDE we'll use for the course.
If you haven't installed it yet t
Visual Studio Code has a built-in Git extension that makes it easy to work with Git and GitHub. You can find it in the sidebar on the left side of the window.


### Visual Studio Code

For organizing your folders you can choose any folder / workspace structure you like. The below setup is just a suggestion.

Some people like to have a workspace which contains separate folders for local work (and which I do not want to upload to the GitHub repo) and for the GitHub repo.

**Basic Setup**

* Have as highest, overall level e.g. a `cc2` folder, which will contain both your local and you GitHub folders.
* Open a new, empty VSCode window.
* Save a e.g. `cc2.code-workspace` file in `cc2` (`File -> Save Workspace As...`)
* Add the `cc2` folder to the workspace
* In `cc2` create a folder for your local work, e.g. `local`

#### Usage Example

##### Pushing

1. Create in the GitHub folder `lecture_sose24_cc2/01_setup_intro/assignments/` a new folder with your last name, e.g. `lecture_sose24_cc2/01_setup_intro/assignments/brauwers/`. All your assignments go into that folder. 
2. In that folder add a new test markdown file, e.g. `hello.md` and write some valid markdown in it (feel free to write something interesting).
3. In the SCM tab that file is now listed under `CHANGES`
3. Select the file and click on the `+` next to it in order add a snapshot of the file to the stage
4. The file is now listed under `STAGED CHANGES`
5. Add a commit message in the text box and commit the file
   * Now the commit is saved as a new version in your local repository
6. Also save the commit online in the GitHub repository by clicking in the `...` and selecting `Push`
   * Now your commit should be added to the online repository as well

##### Pulling

Just for demonstration purposes, make some changes to the file online (this is usually not part of a regular workflow)

1. Open online your `hello.md` and click on the `Edit this file` (the little pen on the top right)
2. Edit the file and make the commit online (below the file)
3. Go back to the `SCM` tab in VSCode and select in the `...` the `Pull` command - now you should have the changes you made online also locally

##### Conflict

1. Edit one line again online in the GitHub repository and commit your changes
2. Before you pull those changes, edit the very same line locally and commit those changes locally.
3. Pull the online changes - a text box should appear, telling you that there is a conflict; also the file will be marked with a `C` in the `SCM` tab
4. Select the file under `MERGE CHANGES`
5. Select from the given options the one you prefer, e.g. `Accept incoming changes`
6. Stage and commit your files


## Workflow Hints

* **Never** nest different git repositories as git will not be able to differentiate between them and your versioning will be inscrutable.
* Do not separately add sub-folders of your git repository into a Visual Studio Code workspace but only add the whole repository.


### Committing

* Use a short, descriptive, and specific comment that will help you to remember later on what you did and why
* Good commit messages start with a brief (<50 characters) summary of changes made in the commit.
* If you want to go into more detail, add a separate description.

For large projects with many collaborators there are [conventions](https://chris.beams.io/posts/git-commit/) on how to write commit messsage.

The seven rules of a great Git commit message are

1. Separate subject from body with a blank line
2. Limit the subject line to 50 characters
3. Capitalize the subject line
4. Do not end the subject line with a period
5. Use the imperative mood in the subject line
6. Wrap the body at 72 characters
7. Use the body to explain what and why vs. how


### Log

To view the commit history of a local repository in VSCode, I recommend the extension [Git History](https://marketplace.visualstudio.com/items?itemName=donjayamanne.githistory).

This is the same as using in the terminal

    $ git log

To avoid having ``git log`` cover your entire terminal screen, you can limit the number of commits that Git lists by using ``-N``, where N is the number of commits that you want to view.

* Git log lists all commits made to a repository in reverse chronological order.
* The listing for each commit includes the commit’s full identifier (which starts with the same characters as the short identifier printed by the git commit command earlier), the commit’s author, when it was created, and the log message Git was given when the commit was created.


### .gitignore

For each git repo, you should setup a `.gitignore` file locally.

In a `.gitignore` file, saved in your repository (e.g. in `lecture_sose24_cc2`) you can list files and folders that git should always ignore. What to ignore can also be specified with wildcards such as `*.log`.

For example on a mac, you want to ignore the `.DS_Store` files, which are stored by default in each folder, and add these as `*.DS_Store` to `.gitignore` (the * means those files anywhere).

As what to ignore highly depends on your personal file and folder structure, you should not push your `.gitignore` file to our GitHub repo. For that add `.gitignore` to your `.gitignore` file. Usually, every collaborator can have her or his own gitignore setup (unless this is otherwise agreed on with the team).

##### Resources

* [Documentation gitignore](https://git-scm.com/docs/gitignore)
* [Gitignore Explained: What is Gitignore and How to Add it to Your Repo](https://www.freecodecamp.org/news/gitignore-what-is-it-and-how-to-add-to-repo/)
* [Ignoring Files and Directories in Git (.gitignore)](https://linuxize.com/post/gitignore-ignoring-files-in-git/)


## Collaboration

As a next step in learning Git and GitHub, we would talk about

* Differences
* Merging
* Branches

But this is not really needed for this class and with that a topic for a later time...


## Summary

* Have an environment for working with Git and GitHub.
* Have your environment configured and ready.
* Know how to work with Git locally.
* Know how to sync your local repo with our only GitHub repository.
* Know how to work with a `.gitignore` file and have one setup for your repo locally.

  