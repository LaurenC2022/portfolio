Command to run all code blocks 

```
$find . -name "*.ipynb" | while read -r notebook; do jupyter nbconvert --to notebook --execute "$notebook" --inplace; done

```

Command to convert all Jupyter notebooks in all folders and subfolders to .html: 
```
$pip install nbconvert
$find . -name "*.ipynb" -exec jupyter nbconvert --to md {} \;
```

Command to create a list of notes with links

```
$echo "# Jupyter Notebooks MD Links" > TOC.md; echo "" >> TOC.md; find . -name "*.md" | sort | while read -r md_file; do folder_path=$(dirname "$md_file" | sed 's/^\.\///'); file_name=$(basename "$md_file"); file_title=$(echo "$file_name" | sed 's/_/ /g' | sed 's/.md//g'); echo "- ${folder_path//\//    }: [${file_title}](${md_file})" >> TOC.md; done

```

Install Jupyter Notebook 

```
$pip install notebook
$python --version
$jupyter --version
$jupyter-notebook
```

Get access tocken if non is provided 

```
$jupyter server list
```