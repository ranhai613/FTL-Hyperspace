---
layout: lua
title: ChoiceBox
lang: en
category: Class
---

# Class "ChoiceBox"


Extends: [FocusWindow](../Hyperspace/FocusWindow)


## Constructors
{: #Constructors .lua-content-section}
### ChoiceBox ()
{: #ChoiceBox .lua-content-item aria-label='Constructors' }
#### [ChoiceBox](../Hyperspace/ChoiceBox) ChoiceBox ()
{: aria-label='Constructors' }

___




## Methods
{: #Methods .lua-content-section}
### GetChoices ()
{: #GetChoices .lua-content-item aria-label='Methods' }
#### vector\<[ChoiceText](../Hyperspace/ChoiceText)\> :GetChoices ()
{: aria-label='Methods' }

___


## Fields
{: #Fields .lua-content-section}
<details markdown="1"><summary id="InheritedFields" class="lua-content-item" markdown="span">Inherited Fields</summary>


#### From [FocusWindow](FocusWindow)

| Type | Field |
| --- | --- |
| boolean | .[bCloseButtonSelected](FocusWindow#bCloseButtonSelected) |
| boolean | .[bFullFocus](FocusWindow#bFullFocus) |
| boolean | .[bOpen](FocusWindow#bOpen) |

</details>
___
### centered
{: #centered .lua-content-item aria-label='Fields' }
#### boolean .centered
{: aria-label='Fields' }

___
### choiceBoxes
{: #choiceBoxes .lua-content-item aria-label='Fields' }
#### vector\<[Rect](../Hyperspace/Rect)\> .choiceBoxes
{: aria-label='Fields' }

___
### choices
{: #choices .lua-content-item aria-label='Fields' }
#### vector\<[ChoiceText](../Hyperspace/ChoiceText)\> .choices
{: aria-label='Fields' }
If you want to modify the current `ChoiceText` values please refer to `:GetChoices()` instead

___
### columnSize
{: #columnSize .lua-content-item aria-label='Fields' }
#### uint .columnSize
{: aria-label='Fields' }

___
### currentTextColor
{: #currentTextColor .lua-content-item aria-label='Fields' }
#### [GL_Color](../Graphics/GL_Color) .currentTextColor
{: aria-label='Fields' }

___
### fontSize
{: #fontSize .lua-content-item aria-label='Fields' }
#### integer .fontSize
{: aria-label='Fields' }

___
### gap_size
{: #gap_size .lua-content-item aria-label='Fields' }
#### integer .gap_size
{: aria-label='Fields' }

___
### lastChoice
{: #lastChoice .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .lastChoice
{: aria-label='Fields' }

___
### mainText
{: #mainText .lua-content-item aria-label='Fields' }
#### string .mainText
{: aria-label='Fields' }

___
### openTime
{: #openTime .lua-content-item aria-label='Fields' }
#### number .openTime
{: aria-label='Fields' }

___
### potentialChoice
{: #potentialChoice .lua-content-item aria-label='Fields' }
#### integer .potentialChoice
{: aria-label='Fields' }

___
### rewards
{: #rewards .lua-content-item aria-label='Fields' }
#### [ResourceEvent](../Hyperspace/ResourceEvent) .rewards
{: aria-label='Fields' }

___
### selectedChoice
{: #selectedChoice .lua-content-item aria-label='Fields' }
#### integer .selectedChoice
{: aria-label='Fields' }

___
