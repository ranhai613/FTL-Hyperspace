---
layout: lua
title: ChoiceBox
lang: en
category: Class
---

# Class "ChoiceBox"


Extends: [FocusWindow](../Hyperspace/FocusWindow)

<!-- Head content to be pulled from "lua-source-parts-inject/Hyperspace/ChoiceBox/_head.md" -->


## Constructors
{: #Constructors .lua-content-section}
### ChoiceBox ()
{: #ChoiceBox .lua-content-item aria-label='Constructors' }
#### [ChoiceBox](../Hyperspace/ChoiceBox) ChoiceBox ()
{: aria-label='Constructors' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ChoiceBox/ChoiceBox().md" -->

___




## Methods
{: #Methods .lua-content-section}
### GetChoices ()
{: #GetChoices .lua-content-item aria-label='Methods' }
#### vector\<[ChoiceText](../Hyperspace/ChoiceText)\> :GetChoices ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ChoiceBox/GetChoices().md" -->

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
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ChoiceBox/centered.md" -->

___
### choiceBoxes
{: #choiceBoxes .lua-content-item aria-label='Fields' }
#### vector\<[Rect](../Hyperspace/Rect)\> .choiceBoxes
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ChoiceBox/choiceBoxes.md" -->

___
### choices
{: #choices .lua-content-item aria-label='Fields' }
#### vector\<[ChoiceText](../Hyperspace/ChoiceText)\> .choices
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/ChoiceBox/choices.md" -->
If you want to modify the current `ChoiceText` values please refer to `:GetChoices()` instead
<!-- End of content -->

___
### columnSize
{: #columnSize .lua-content-item aria-label='Fields' }
#### uint .columnSize
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ChoiceBox/columnSize.md" -->

___
### currentTextColor
{: #currentTextColor .lua-content-item aria-label='Fields' }
#### [GL_Color](../Graphics/GL_Color) .currentTextColor
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ChoiceBox/currentTextColor.md" -->

___
### fontSize
{: #fontSize .lua-content-item aria-label='Fields' }
#### integer .fontSize
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ChoiceBox/fontSize.md" -->

___
### gap_size
{: #gap_size .lua-content-item aria-label='Fields' }
#### integer .gap_size
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ChoiceBox/gap_size.md" -->

___
### lastChoice
{: #lastChoice .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .lastChoice
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ChoiceBox/lastChoice.md" -->

___
### mainText
{: #mainText .lua-content-item aria-label='Fields' }
#### string .mainText
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ChoiceBox/mainText.md" -->

___
### openTime
{: #openTime .lua-content-item aria-label='Fields' }
#### number .openTime
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ChoiceBox/openTime.md" -->

___
### potentialChoice
{: #potentialChoice .lua-content-item aria-label='Fields' }
#### integer .potentialChoice
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ChoiceBox/potentialChoice.md" -->

___
### rewards
{: #rewards .lua-content-item aria-label='Fields' }
#### [ResourceEvent](../Hyperspace/ResourceEvent) .rewards
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ChoiceBox/rewards.md" -->

___
### selectedChoice
{: #selectedChoice .lua-content-item aria-label='Fields' }
#### integer .selectedChoice
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ChoiceBox/selectedChoice.md" -->

___
