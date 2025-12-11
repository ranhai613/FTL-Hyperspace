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

______
### choiceBoxes
{: aria-label='Fields' }
#### vector\<[Rect](../Hyperspace/Rect)\> .choiceBoxes
{: aria-label='Fields' }

______
### choices
{: aria-label='Fields' }
#### vector\<[ChoiceText](../Hyperspace/ChoiceText)\> .choices
{: aria-label='Fields' }
If you want to modify the current `ChoiceText` values please refer to `:GetChoices()` instead

______
### columnSize
{: aria-label='Fields' }
#### uint .columnSize
{: aria-label='Fields' }

______
### currentTextColor
{: aria-label='Fields' }
#### [GL_Color](../Graphics/GL_Color) .currentTextColor
{: aria-label='Fields' }

______
### fontSize
{: aria-label='Fields' }
#### integer .fontSize
{: aria-label='Fields' }

______
### gap_size
{: aria-label='Fields' }
#### integer .gap_size
{: aria-label='Fields' }

______
### lastChoice
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .lastChoice
{: aria-label='Fields' }

______
### mainText
{: aria-label='Fields' }
#### string .mainText
{: aria-label='Fields' }

______
### openTime
{: aria-label='Fields' }
#### number .openTime
{: aria-label='Fields' }

______
### potentialChoice
{: aria-label='Fields' }
#### integer .potentialChoice
{: aria-label='Fields' }

______
### rewards
{: aria-label='Fields' }
#### [ResourceEvent](../Hyperspace/ResourceEvent) .rewards
{: aria-label='Fields' }

______
### selectedChoice
{: aria-label='Fields' }
#### integer .selectedChoice
{: aria-label='Fields' }

___
