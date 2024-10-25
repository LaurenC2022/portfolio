
Command to create table of contents 

```
$eecho "# Table of Contents" > TOC.md; echo "" >> TOC.md; find . -type f -not -path '*/.*' -not -name 'CNAME' -not -path './images/*' | awk '{print length($0), $0}' | sort -n | cut -d' ' -f2- | while read -r file; do folder_path=$(dirname "$file" | sed 's/^\.\///'); file_name=$(basename "$file"); file_title=$(echo "$file_name" | sed 's/_/ /g; s/\.[^.]*//g'); echo "- ${folder_path//\//    } [${file_title}](${file})" >> TOC.md; done

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