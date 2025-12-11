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

______
### GetChoices ()
{: aria-label='Methods' }
#### vector\<[Choice](../Hyperspace/Choice)\> :GetChoices ()
{: aria-label='Methods' }

______
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

______
### boarders
{: aria-label='Fields' }
#### [BoardingEvent](../Hyperspace/BoardingEvent) .boarders
{: aria-label='Fields' }

______
### choices
{: aria-label='Fields' }
#### vector\<[Choice](../Hyperspace/Choice)\> .choices
{: aria-label='Fields' }
If you want to modify the current `Choice` values please refer to `:GetChoices()` instead

______
### distressBeacon
{: aria-label='Fields' }
#### boolean .distressBeacon
{: aria-label='Fields' }

______
### environment
{: aria-label='Fields' }
#### integer .environment
{: aria-label='Fields' }

______
### environmentTarget
{: aria-label='Fields' }
#### integer .environmentTarget
{: aria-label='Fields' }

______
### eventName
{: aria-label='Fields' }
#### string .eventName
{: aria-label='Fields' }

______
### fleetPosition
{: aria-label='Fields' }
#### integer .fleetPosition
{: aria-label='Fields' }

______
### gap_ex_cleared
{: aria-label='Fields' }
#### boolean .gap_ex_cleared
{: aria-label='Fields' }

______
### modifyPursuit
{: aria-label='Fields' }
#### integer .modifyPursuit
{: aria-label='Fields' }

______
### planetImage
{: aria-label='Fields' }
#### string .planetImage
{: aria-label='Fields' }

______
### quest
{: aria-label='Fields' }
#### string .quest
{: aria-label='Fields' }

______
### repair
{: aria-label='Fields' }
#### boolean .repair
{: aria-label='Fields' }

______
### reveal_map
{: aria-label='Fields' }
#### boolean .reveal_map
{: aria-label='Fields' }

______
### reward
{: aria-label='Fields' }
#### [ResourceEvent](../Hyperspace/ResourceEvent) .reward
{: aria-label='Fields' }

______
### secretSector
{: aria-label='Fields' }
#### boolean .secretSector
{: aria-label='Fields' }

______
### spaceImage
{: aria-label='Fields' }
#### string .spaceImage
{: aria-label='Fields' }

______
### store
{: aria-label='Fields' }
#### boolean .store
{: aria-label='Fields' }

______
### stuff
{: aria-label='Fields' }
#### [ResourceEvent](../Hyperspace/ResourceEvent) .stuff
{: aria-label='Fields' }

______
### text
{: aria-label='Fields' }
#### [TextString](../Hyperspace/TextString) .text
{: aria-label='Fields' }

______
### unlockShip
{: aria-label='Fields' }
#### integer .unlockShip
{: aria-label='Fields' }

______
### unlockShipText
{: aria-label='Fields' }
#### [TextString](../Hyperspace/TextString) .unlockShipText
{: aria-label='Fields' }

___
