# Clion new project builder script

add this script to your `.bashrc` or any other equivalent.

```bash
new_cpp() {
    if [[ $# -eq 0 ]] ; then
        echo 'usage: new_cpp <project_name>'
    else
        echo "creating '$1' folder from template"
        mkdir $1
        echo "move current directory to '$1'"
        cd $1
        echo "Preparing project for '$1'"
        git clone https://github.com/knavels/clion_template.git .
        rm -rf .git
        rm -rf README.md
        rm -rf LICENSE
        for z in `find . -type f`; do
        sed -e "s/{{project_name}}/$1/g" $z>temp;
        mv temp $z;
        done
        echo "done"
        echo "renaming the clion project settings"
        mv ./.idea/project_name.iml.tmpl ./.idea/$1.iml
        mv README.tmpl README.md
        echo "done"
        echo "initializing git"
        git init
        echo "commiting new changes"
        git add .
        git commit -m "initial commit"
        echo "done"
        echo "important note:"
        echo "in case of build problem in clion, select 'reload cmake project' from 'file' menu"
    fi
}
```