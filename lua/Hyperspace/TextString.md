---
layout: lua
title: TextString
lang: en
category: Class
---

# Class "TextString"

<!-- Head content to be pulled from "lua-source-parts-inject/Hyperspace/TextString/_head.md" -->


## Constructors
{: #Constructors .lua-content-section}
### TextString ()
{: #TextString .lua-content-item aria-label='Constructors' }
#### [TextString](../Hyperspace/TextString) TextString ()
{: aria-label='Constructors' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/TextString/TextString().md" -->

___
### TextString ()
{: #TextString .lua-content-item aria-label='Constructors' }
#### [TextString](../Hyperspace/TextString) TextString (string str, boolean literal)
{: aria-label='Constructors' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/TextString/TextString(string,boolean).md" -->

___




## Methods
{: #Methods .lua-content-section}
### GetText ()
{: #GetText .lua-content-item aria-label='Methods' }
#### string :GetText ()
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/TextString/GetText().md" -->
If `.isLiteral` is true, this gets the value of `.data`, otherwise it gets the text referring to the text id from the value of `.data`.
<!-- End of content -->

___


## Fields
{: #Fields .lua-content-section}
### data
{: #data .lua-content-item aria-label='Fields' }
#### string .data
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/TextString/data.md" -->
You can change the text by setting this value.
If `.isLiteral` is true, this stores the text itself, otherwise it stores the text id.
<!-- End of content -->

___
### isLiteral
{: #isLiteral .lua-content-item aria-label='Fields' }
#### boolean .isLiteral
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/TextString/isLiteral.md" -->
If true, the game will display the value of `.data`, otherwise it will refer to the text id from the value of `.data`.
<!-- End of content -->

___
