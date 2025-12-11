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
{: aria-label='Methods' }
#### void :AddChoice ([LocationEvent](../Hyperspace/LocationEvent) newEvent, string text, [ChoiceReq](../Hyperspace/ChoiceReq) requirement, boolean hiddenReward)
{: aria-label='Methods' }

___
### GetChoices ()
{: aria-label='Methods' }
#### vector\<[Choice](../Hyperspace/Choice)\> :GetChoices ()
{: aria-label='Methods' }

___
### RemoveChoice ()
{: aria-label='Methods' }
#### boolean :RemoveChoice (integer index)
{: aria-label='Methods' }

___


## Fields
### beacon
{: aria-label='Fields' }
#### boolean .beacon
{: aria-label='Fields' }

___
### boarders
{: aria-label='Fields' }
#### [BoardingEvent](../Hyperspace/BoardingEvent) .boarders
{: aria-label='Fields' }

___
### choices
{: aria-label='Fields' }
#### vector\<[Choice](../Hyperspace/Choice)\> .choices
{: aria-label='Fields' }
If you want to modify the current `Choice` values please refer to `:GetChoices()` instead

___
### distressBeacon
{: aria-label='Fields' }
#### boolean .distressBeacon
{: aria-label='Fields' }

___
### environment
{: aria-label='Fields' }
#### integer .environment
{: aria-label='Fields' }

___
### environmentTarget
{: aria-label='Fields' }
#### integer .environmentTarget
{: aria-label='Fields' }

___
### eventName
{: aria-label='Fields' }
#### string .eventName
{: aria-label='Fields' }

___
### fleetPosition
{: aria-label='Fields' }
#### integer .fleetPosition
{: aria-label='Fields' }

___
### gap_ex_cleared
{: aria-label='Fields' }
#### boolean .gap_ex_cleared
{: aria-label='Fields' }

___
### modifyPursuit
{: aria-label='Fields' }
#### integer .modifyPursuit
{: aria-label='Fields' }

___
### planetImage
{: aria-label='Fields' }
#### string .planetImage
{: aria-label='Fields' }

___
### quest
{: aria-label='Fields' }
#### string .quest
{: aria-label='Fields' }

___
### repair
{: aria-label='Fields' }
#### boolean .repair
{: aria-label='Fields' }

___
### reveal_map
{: aria-label='Fields' }
#### boolean .reveal_map
{: aria-label='Fields' }

___
### reward
{: aria-label='Fields' }
#### [ResourceEvent](../Hyperspace/ResourceEvent) .reward
{: aria-label='Fields' }

___
### secretSector
{: aria-label='Fields' }
#### boolean .secretSector
{: aria-label='Fields' }

___
### spaceImage
{: aria-label='Fields' }
#### string .spaceImage
{: aria-label='Fields' }

___
### store
{: aria-label='Fields' }
#### boolean .store
{: aria-label='Fields' }

___
### stuff
{: aria-label='Fields' }
#### [ResourceEvent](../Hyperspace/ResourceEvent) .stuff
{: aria-label='Fields' }

___
### text
{: aria-label='Fields' }
#### [TextString](../Hyperspace/TextString) .text
{: aria-label='Fields' }

___
### unlockShip
{: aria-label='Fields' }
#### integer .unlockShip
{: aria-label='Fields' }

___
### unlockShipText
{: aria-label='Fields' }
#### [TextString](../Hyperspace/TextString) .unlockShipText
{: aria-label='Fields' }

___
