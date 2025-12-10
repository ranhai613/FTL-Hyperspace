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
{: aria-label='Functions' }
#### vector\<[ChoiceText](../Hyperspace/ChoiceText)\> :GetChoices ()
{: aria-label='Functions' }

___


## Fields
### centered
{: aria-label='Variables' }
#### boolean .centered
{: aria-label='Variables' }

______
### choiceBoxes
{: aria-label='Variables' }
#### vector\<[Rect](../Hyperspace/Rect)\> .choiceBoxes
{: aria-label='Variables' }

______
### choices
{: aria-label='Variables' }
#### vector\<[ChoiceText](../Hyperspace/ChoiceText)\> .choices
{: aria-label='Variables' }
If you want to modify the current `ChoiceText` values please refer to `:GetChoices()` instead

______
### columnSize
{: aria-label='Variables' }
#### uint .columnSize
{: aria-label='Variables' }

______
### currentTextColor
{: aria-label='Variables' }
#### [GL_Color](../Graphics/GL_Color) .currentTextColor
{: aria-label='Variables' }

______
### fontSize
{: aria-label='Variables' }
#### integer .fontSize
{: aria-label='Variables' }

______
### gap_size
{: aria-label='Variables' }
#### integer .gap_size
{: aria-label='Variables' }

______
### lastChoice
{: aria-label='Variables' }
#### [Pointf](../Hyperspace/Pointf) .lastChoice
{: aria-label='Variables' }

______
### mainText
{: aria-label='Variables' }
#### string .mainText
{: aria-label='Variables' }

______
### openTime
{: aria-label='Variables' }
#### number .openTime
{: aria-label='Variables' }

______
### potentialChoice
{: aria-label='Variables' }
#### integer .potentialChoice
{: aria-label='Variables' }

______
### rewards
{: aria-label='Variables' }
#### [ResourceEvent](../Hyperspace/ResourceEvent) .rewards
{: aria-label='Variables' }

______
### selectedChoice
{: aria-label='Variables' }
#### integer .selectedChoice
{: aria-label='Variables' }

___
