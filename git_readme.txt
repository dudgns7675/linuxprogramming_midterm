## Start git
git init [dir_name]
git config --global user.email [email]
git config --global user.username [username]

## Push git
git add [filename]
git commit -m "[message]"
git remote add origin [git_address]
git push origin master

## Pull git
git pull origin master

## Remove git file
git rm [filename]

## Branch check
git branch
git checkout -b [branch_name] ## -b option create new branch if not exist
git merge [branch_name] ## merge each other branch

## Remote URL change
git remote set-url origin [git_address]

...

