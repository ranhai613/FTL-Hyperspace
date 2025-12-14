---
layout: lua
title: LocationEvent
lang: en
category: Class
---

# Class "LocationEvent"


## Constructors
{: #Constructors .lua-content-section}
### LocationEvent ()
{: #LocationEvent .lua-content-item aria-label='Constructors' }
#### [LocationEvent](../Hyperspace/LocationEvent) LocationEvent ()
{: aria-label='Constructors' }

___




## Methods
{: #Methods .lua-content-section}
### AddChoice ()
{: #AddChoice .lua-content-item aria-label='Methods' }
#### void :AddChoice ([LocationEvent](../Hyperspace/LocationEvent) newEvent, string text, [ChoiceReq](../Hyperspace/ChoiceReq) requirement, boolean hiddenReward)
{: aria-label='Methods' }

___
### GetChoices ()
{: #GetChoices .lua-content-item aria-label='Methods' }
#### vector\<[Choice](../Hyperspace/Choice)\> :GetChoices ()
{: aria-label='Methods' }

___
### RemoveChoice ()
{: #RemoveChoice .lua-content-item aria-label='Methods' }
#### boolean :RemoveChoice (integer index)
{: aria-label='Methods' }

___


## Fields
{: #Fields .lua-content-section}
### beacon
{: #beacon .lua-content-item aria-label='Fields' }
#### boolean .beacon
{: aria-label='Fields' }

___
### boarders
{: #boarders .lua-content-item aria-label='Fields' }
#### [BoardingEvent](../Hyperspace/BoardingEvent) .boarders
{: aria-label='Fields' }

___
### choices
{: #choices .lua-content-item aria-label='Fields' }
#### vector\<[Choice](../Hyperspace/Choice)\> .choices
{: aria-label='Fields' }
If you want to modify the current `Choice` values please refer to `:GetChoices()` instead

___
### distressBeacon
{: #distressBeacon .lua-content-item aria-label='Fields' }
#### boolean .distressBeacon
{: aria-label='Fields' }

___
### environment
{: #environment .lua-content-item aria-label='Fields' }
#### integer .environment
{: aria-label='Fields' }

___
### environmentTarget
{: #environmentTarget .lua-content-item aria-label='Fields' }
#### integer .environmentTarget
{: aria-label='Fields' }

___
### eventName
{: #eventName .lua-content-item aria-label='Fields' }
#### string .eventName
{: aria-label='Fields' }

___
### fleetPosition
{: #fleetPosition .lua-content-item aria-label='Fields' }
#### integer .fleetPosition
{: aria-label='Fields' }

___
### gap_ex_cleared
{: #gap_ex_cleared .lua-content-item aria-label='Fields' }
#### boolean .gap_ex_cleared
{: aria-label='Fields' }

___
### modifyPursuit
{: #modifyPursuit .lua-content-item aria-label='Fields' }
#### integer .modifyPursuit
{: aria-label='Fields' }

___
### planetImage
{: #planetImage .lua-content-item aria-label='Fields' }
#### string .planetImage
{: aria-label='Fields' }

___
### quest
{: #quest .lua-content-item aria-label='Fields' }
#### string .quest
{: aria-label='Fields' }

___
### repair
{: #repair .lua-content-item aria-label='Fields' }
#### boolean .repair
{: aria-label='Fields' }

___
### reveal_map
{: #reveal_map .lua-content-item aria-label='Fields' }
#### boolean .reveal_map
{: aria-label='Fields' }

___
### reward
{: #reward .lua-content-item aria-label='Fields' }
#### [ResourceEvent](../Hyperspace/ResourceEvent) .reward
{: aria-label='Fields' }

___
### secretSector
{: #secretSector .lua-content-item aria-label='Fields' }
#### boolean .secretSector
{: aria-label='Fields' }

___
### spaceImage
{: #spaceImage .lua-content-item aria-label='Fields' }
#### string .spaceImage
{: aria-label='Fields' }

___
### store
{: #store .lua-content-item aria-label='Fields' }
#### boolean .store
{: aria-label='Fields' }

___
### stuff
{: #stuff .lua-content-item aria-label='Fields' }
#### [ResourceEvent](../Hyperspace/ResourceEvent) .stuff
{: aria-label='Fields' }

___
### text
{: #text .lua-content-item aria-label='Fields' }
#### [TextString](../Hyperspace/TextString) .text
{: aria-label='Fields' }

___
### unlockShip
{: #unlockShip .lua-content-item aria-label='Fields' }
#### integer .unlockShip
{: aria-label='Fields' }

___
### unlockShipText
{: #unlockShipText .lua-content-item aria-label='Fields' }
#### [TextString](../Hyperspace/TextString) .unlockShipText
{: aria-label='Fields' }

___
