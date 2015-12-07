declare variable $where as xs:string := string($exampleDirectory/@fileName);
<html>
    <head>
        <title>All cpp files in: {$where}</title>
    </head>
    <body>
        <p>The following cpp-files were found in {$where}, sorted by file size:</p>
        <ul>
            {
                for $file in $exampleDirectory//file[@suffix = "cpp"]
                order by xs:integer($file/@size)
                return <li>
                            {string($file/@fileName)}, size: {string($file/@size)}
                       </li>
            }
        </ul>
    </body>
</html>
