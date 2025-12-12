---
layout: lua
title: TextString
lang: en
---

# Class "TextString"


## Constructors
{: #Constructors .lua-content-section}
### TextString ()
{: #TextString .lua-content-item aria-label='Constructors' }
#### [TextString](../Hyperspace/TextString) TextString ()
{: aria-label='Constructors' }

___
### TextString ()
{: #TextString .lua-content-item aria-label='Constructors' }
#### [TextString](../Hyperspace/TextString) TextString (string str, boolean literal)
{: aria-label='Constructors' }

___




## Methods
{: #Methods .lua-content-section}
### GetText ()
{: #GetText .lua-content-item aria-label='Methods' }
#### string :GetText ()
{: aria-label='Methods' }
If `.isLiteral` is true, this gets the value of `.data`, otherwise it gets the text referring to the text id from the value of `.data`.

___


## Fields
{: #Fields .lua-content-section}
### data
{: #data .lua-content-item aria-label='Fields' }
#### string .data
{: aria-label='Fields' }
You can change the text by setting this value.
If `.isLiteral` is true, this stores the text itself, otherwise it stores the text id.

___
### isLiteral
{: #isLiteral .lua-content-item aria-label='Fields' }
#### boolean .isLiteral
{: aria-label='Fields' }
If true, the game will display the value of `.data`, otherwise it will refer to the text id from the value of `.data`.

___
