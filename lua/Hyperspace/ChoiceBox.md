---
layout: lua
title: ChoiceBox
lang: en
---

# Class "ChoiceBox"


Extends: [FocusWindow](../Hyperspace/FocusWindow)


## Constructors
{: #Constructors .section}
### ChoiceBox ()
{: #ChoiceBox aria-label='Constructors' }
#### [ChoiceBox](../Hyperspace/ChoiceBox) ChoiceBox ()
{: aria-label='Constructors' }

___




## Methods
{: #Methods .section}
### GetChoices ()
{: #GetChoices aria-label='Methods' }
#### vector\<[ChoiceText](../Hyperspace/ChoiceText)\> :GetChoices ()
{: aria-label='Methods' }

___


## Fields
{: #Fields .section}
<details markdown="1"><summary markdown="span">Inherited Fields</summary>


#### From [FocusWindow](FocusWindow)

| Type | Field |
| --- | --- |
| boolean | .[bCloseButtonSelected](FocusWindow#bCloseButtonSelected-) |
| boolean | .[bFullFocus](FocusWindow#bFullFocus-) |
| boolean | .[bOpen](FocusWindow#bOpen-) |

</details>
___
### centered
{: #centered aria-label='Fields' }
#### boolean .centered
{: aria-label='Fields' }

___
### choiceBoxes
{: #choiceBoxes aria-label='Fields' }
#### vector\<[Rect](../Hyperspace/Rect)\> .choiceBoxes
{: aria-label='Fields' }

___
### choices
{: #choices aria-label='Fields' }
#### vector\<[ChoiceText](../Hyperspace/ChoiceText)\> .choices
{: aria-label='Fields' }
If you want to modify the current `ChoiceText` values please refer to `:GetChoices()` instead

___
### columnSize
{: #columnSize aria-label='Fields' }
#### uint .columnSize
{: aria-label='Fields' }

___
### currentTextColor
{: #currentTextColor aria-label='Fields' }
#### [GL_Color](../Graphics/GL_Color) .currentTextColor
{: aria-label='Fields' }

___
### fontSize
{: #fontSize aria-label='Fields' }
#### integer .fontSize
{: aria-label='Fields' }

___
### gap_size
{: #gap_size aria-label='Fields' }
#### integer .gap_size
{: aria-label='Fields' }

___
### lastChoice
{: #lastChoice aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .lastChoice
{: aria-label='Fields' }

___
### mainText
{: #mainText aria-label='Fields' }
#### string .mainText
{: aria-label='Fields' }

___
### openTime
{: #openTime aria-label='Fields' }
#### number .openTime
{: aria-label='Fields' }

___
### potentialChoice
{: #potentialChoice aria-label='Fields' }
#### integer .potentialChoice
{: aria-label='Fields' }

___
### rewards
{: #rewards aria-label='Fields' }
#### [ResourceEvent](../Hyperspace/ResourceEvent) .rewards
{: aria-label='Fields' }

___
### selectedChoice
{: #selectedChoice aria-label='Fields' }
#### integer .selectedChoice
{: aria-label='Fields' }

___
