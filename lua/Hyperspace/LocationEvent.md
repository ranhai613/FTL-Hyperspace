---
layout: lua
title: LocationEvent
lang: en
category: Class
---

# Class "LocationEvent"

<!-- Head content to be pulled from "lua-source-parts-inject/Hyperspace/LocationEvent/_head.md" -->


## Constructors
{: #Constructors .lua-content-section}
### LocationEvent ()
{: #LocationEvent .lua-content-item aria-label='Constructors' }
#### [LocationEvent](../Hyperspace/LocationEvent) LocationEvent ()
{: aria-label='Constructors' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/LocationEvent/LocationEvent().md" -->

___




## Methods
{: #Methods .lua-content-section}
### AddChoice ()
{: #AddChoice .lua-content-item aria-label='Methods' }
#### void :AddChoice ([LocationEvent](../Hyperspace/LocationEvent) newEvent, string text, [ChoiceReq](../Hyperspace/ChoiceReq) requirement, boolean hiddenReward)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/LocationEvent/AddChoice(Hyperspace.LocationEvent,string,Hyperspace.ChoiceReq,boolean).md" -->

___
### GetChoices ()
{: #GetChoices .lua-content-item aria-label='Methods' }
#### vector\<[Choice](../Hyperspace/Choice)\> :GetChoices ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/LocationEvent/GetChoices().md" -->

___
### RemoveChoice ()
{: #RemoveChoice .lua-content-item aria-label='Methods' }
#### boolean :RemoveChoice (integer index)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/LocationEvent/RemoveChoice(integer).md" -->

___


## Fields
{: #Fields .lua-content-section}
### beacon
{: #beacon .lua-content-item aria-label='Fields' }
#### boolean .beacon
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/LocationEvent/beacon.md" -->

___
### boarders
{: #boarders .lua-content-item aria-label='Fields' }
#### [BoardingEvent](../Hyperspace/BoardingEvent) .boarders
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/LocationEvent/boarders.md" -->

___
### choices
{: #choices .lua-content-item aria-label='Fields' }
#### vector\<[Choice](../Hyperspace/Choice)\> .choices
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/LocationEvent/choices.md" -->
If you want to modify the current `Choice` values please refer to `:GetChoices()` instead
<!-- End of content -->

___
### distressBeacon
{: #distressBeacon .lua-content-item aria-label='Fields' }
#### boolean .distressBeacon
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/LocationEvent/distressBeacon.md" -->

___
### environment
{: #environment .lua-content-item aria-label='Fields' }
#### integer .environment
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/LocationEvent/environment.md" -->

___
### environmentTarget
{: #environmentTarget .lua-content-item aria-label='Fields' }
#### integer .environmentTarget
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/LocationEvent/environmentTarget.md" -->

___
### eventName
{: #eventName .lua-content-item aria-label='Fields' }
#### string .eventName
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/LocationEvent/eventName.md" -->

___
### fleetPosition
{: #fleetPosition .lua-content-item aria-label='Fields' }
#### integer .fleetPosition
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/LocationEvent/fleetPosition.md" -->

___
### gap_ex_cleared
{: #gap_ex_cleared .lua-content-item aria-label='Fields' }
#### boolean .gap_ex_cleared
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/LocationEvent/gap_ex_cleared.md" -->

___
### modifyPursuit
{: #modifyPursuit .lua-content-item aria-label='Fields' }
#### integer .modifyPursuit
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/LocationEvent/modifyPursuit.md" -->

___
### planetImage
{: #planetImage .lua-content-item aria-label='Fields' }
#### string .planetImage
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/LocationEvent/planetImage.md" -->

___
### quest
{: #quest .lua-content-item aria-label='Fields' }
#### string .quest
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/LocationEvent/quest.md" -->

___
### repair
{: #repair .lua-content-item aria-label='Fields' }
#### boolean .repair
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/LocationEvent/repair.md" -->

___
### reveal_map
{: #reveal_map .lua-content-item aria-label='Fields' }
#### boolean .reveal_map
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/LocationEvent/reveal_map.md" -->

___
### reward
{: #reward .lua-content-item aria-label='Fields' }
#### [ResourceEvent](../Hyperspace/ResourceEvent) .reward
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/LocationEvent/reward.md" -->

___
### secretSector
{: #secretSector .lua-content-item aria-label='Fields' }
#### boolean .secretSector
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/LocationEvent/secretSector.md" -->

___
### spaceImage
{: #spaceImage .lua-content-item aria-label='Fields' }
#### string .spaceImage
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/LocationEvent/spaceImage.md" -->

___
### store
{: #store .lua-content-item aria-label='Fields' }
#### boolean .store
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/LocationEvent/store.md" -->

___
### stuff
{: #stuff .lua-content-item aria-label='Fields' }
#### [ResourceEvent](../Hyperspace/ResourceEvent) .stuff
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/LocationEvent/stuff.md" -->

___
### text
{: #text .lua-content-item aria-label='Fields' }
#### [TextString](../Hyperspace/TextString) .text
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/LocationEvent/text.md" -->

___
### unlockShip
{: #unlockShip .lua-content-item aria-label='Fields' }
#### integer .unlockShip
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/LocationEvent/unlockShip.md" -->

___
### unlockShipText
{: #unlockShipText .lua-content-item aria-label='Fields' }
#### [TextString](../Hyperspace/TextString) .unlockShipText
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/LocationEvent/unlockShipText.md" -->

___
