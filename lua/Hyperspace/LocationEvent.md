---
layout: lua
title: LocationEvent
lang: en
---

# Class "LocationEvent"


## Constructors
### LocationEvent ()
{: aria-label='Constructors' }
#### [LocationEvent](../Hyperspace/LocationEvent) LocationEvent ()
{: aria-label='Constructors' }

___




## Methods
### AddChoice ()
{: aria-label='Functions' }
#### void :AddChoice ([LocationEvent](../Hyperspace/LocationEvent) newEvent, string text, [ChoiceReq](../Hyperspace/ChoiceReq) requirement, boolean hiddenReward)
{: aria-label='Functions' }

______
### GetChoices ()
{: aria-label='Functions' }
#### vector\<[Choice](../Hyperspace/Choice)\> :GetChoices ()
{: aria-label='Functions' }

______
### RemoveChoice ()
{: aria-label='Functions' }
#### boolean :RemoveChoice (integer index)
{: aria-label='Functions' }

___


## Fields
### beacon
{: aria-label='Variables' }
#### boolean .beacon
{: aria-label='Variables' }

______
### boarders
{: aria-label='Variables' }
#### [BoardingEvent](../Hyperspace/BoardingEvent) .boarders
{: aria-label='Variables' }

______
### choices
{: aria-label='Variables' }
#### vector\<[Choice](../Hyperspace/Choice)\> .choices
{: aria-label='Variables' }
If you want to modify the current `Choice` values please refer to `:GetChoices()` instead

______
### distressBeacon
{: aria-label='Variables' }
#### boolean .distressBeacon
{: aria-label='Variables' }

______
### environment
{: aria-label='Variables' }
#### integer .environment
{: aria-label='Variables' }

______
### environmentTarget
{: aria-label='Variables' }
#### integer .environmentTarget
{: aria-label='Variables' }

______
### eventName
{: aria-label='Variables' }
#### string .eventName
{: aria-label='Variables' }

______
### fleetPosition
{: aria-label='Variables' }
#### integer .fleetPosition
{: aria-label='Variables' }

______
### gap_ex_cleared
{: aria-label='Variables' }
#### boolean .gap_ex_cleared
{: aria-label='Variables' }

______
### modifyPursuit
{: aria-label='Variables' }
#### integer .modifyPursuit
{: aria-label='Variables' }

______
### planetImage
{: aria-label='Variables' }
#### string .planetImage
{: aria-label='Variables' }

______
### quest
{: aria-label='Variables' }
#### string .quest
{: aria-label='Variables' }

______
### repair
{: aria-label='Variables' }
#### boolean .repair
{: aria-label='Variables' }

______
### reveal_map
{: aria-label='Variables' }
#### boolean .reveal_map
{: aria-label='Variables' }

______
### reward
{: aria-label='Variables' }
#### [ResourceEvent](../Hyperspace/ResourceEvent) .reward
{: aria-label='Variables' }

______
### secretSector
{: aria-label='Variables' }
#### boolean .secretSector
{: aria-label='Variables' }

______
### spaceImage
{: aria-label='Variables' }
#### string .spaceImage
{: aria-label='Variables' }

______
### store
{: aria-label='Variables' }
#### boolean .store
{: aria-label='Variables' }

______
### stuff
{: aria-label='Variables' }
#### [ResourceEvent](../Hyperspace/ResourceEvent) .stuff
{: aria-label='Variables' }

______
### text
{: aria-label='Variables' }
#### [TextString](../Hyperspace/TextString) .text
{: aria-label='Variables' }

______
### unlockShip
{: aria-label='Variables' }
#### integer .unlockShip
{: aria-label='Variables' }

______
### unlockShipText
{: aria-label='Variables' }
#### [TextString](../Hyperspace/TextString) .unlockShipText
{: aria-label='Variables' }

___
