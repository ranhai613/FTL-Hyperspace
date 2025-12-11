---
layout: lua
title: ChoiceBox
lang: en
---

# Class "ChoiceBox"

Extends: [FocusWindow](../Hyperspace/FocusWindow)


## Constructors
### ChoiceBox ()
{: aria-label='Constructors' }
#### [ChoiceBox](../Hyperspace/ChoiceBox) ChoiceBox ()
{: aria-label='Constructors' }

___




## Methods
### GetChoices ()
{: aria-label='Methods' }
#### vector\<[ChoiceText](../Hyperspace/ChoiceText)\> :GetChoices ()
{: aria-label='Methods' }

___


## Fields
### centered
{: aria-label='Fields' }
#### boolean .centered
{: aria-label='Fields' }

___
### choiceBoxes
{: aria-label='Fields' }
#### vector\<[Rect](../Hyperspace/Rect)\> .choiceBoxes
{: aria-label='Fields' }

___
### choices
{: aria-label='Fields' }
#### vector\<[ChoiceText](../Hyperspace/ChoiceText)\> .choices
{: aria-label='Fields' }
If you want to modify the current `ChoiceText` values please refer to `:GetChoices()` instead

___
### columnSize
{: aria-label='Fields' }
#### uint .columnSize
{: aria-label='Fields' }

___
### currentTextColor
{: aria-label='Fields' }
#### [GL_Color](../Graphics/GL_Color) .currentTextColor
{: aria-label='Fields' }

___
### fontSize
{: aria-label='Fields' }
#### integer .fontSize
{: aria-label='Fields' }

___
### gap_size
{: aria-label='Fields' }
#### integer .gap_size
{: aria-label='Fields' }

___
### lastChoice
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .lastChoice
{: aria-label='Fields' }

___
### mainText
{: aria-label='Fields' }
#### string .mainText
{: aria-label='Fields' }

___
### openTime
{: aria-label='Fields' }
#### number .openTime
{: aria-label='Fields' }

___
### potentialChoice
{: aria-label='Fields' }
#### integer .potentialChoice
{: aria-label='Fields' }

___
### rewards
{: aria-label='Fields' }
#### [ResourceEvent](../Hyperspace/ResourceEvent) .rewards
{: aria-label='Fields' }

___
### selectedChoice
{: aria-label='Fields' }
#### integer .selectedChoice
{: aria-label='Fields' }

___
