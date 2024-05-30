**Creative Coding II**

Prof. Dr.-Ing. Angela Brennecke | a.brennecke@filmuniversitaet.de | Film University Babelsberg *KONRAD WOLF*   
Anna Brauwers | anna.s.brauwers@filmuniversitaet.de | Film University Babelsberg *KONRAD WOLF*

---

# Assignments

You need 10 assignment pts in total to collect 50% of the course pts and to pass the course. You can collect 3 pts per assignment sheet.

## 1 Assignment - Recap

Each team, read the script and additional materials. Note down any questions that came up during recapping the material and lectures. Use learncpp.com or other suggested reading materials to find answers to your questions. Discuss with your team mate and bring open questions to the next class.


## 2 Assignment - Github Development | 1 pts

In your teams, create a developer branch for each developer. In order to work on the developer branch you have to call `git checkout <branch-name>`. Develop your feature for the ascii art application and push it to your developer branches. In order to merge the developer features to the `main` branch, make sure to follow this procedure:

- 1. Add and commit all of your changes to your developer branch: 
  - `git add .` 
  - `git commit -am "my message"`
  - `git pull`
  - `git push`
- 2. Merge your branch back into the `main` branch:
  - `git checkout main`
  - `git pull`
  - `git merge <developer-branch>`
  - `git commit -am "merging dev into main"`
  - `git push`

During the merge process it can happen that you encounter conflicts due to diverging branches or because you did not commit before pulling or merging the new branch. Check out the Github_merge_conflicts.md file for a solution and try to resolve the issue. 


## 2 Assignment - Creativity | 2 pts

In your team, continue to develop a creative and fun to use ascii_art application. Base it on your learnings so far and use the application exercises as a basis for new ideas. 
- How should the application work? 
- What components will be part of it (UI, reading, writing, printing, ascii-art)? 
- How can you create an animated ascii art in the command line? 

Think about how to use a data type like a `struct` (or `class`) in your application. Document your application design with a few bullet points and implement a solution.