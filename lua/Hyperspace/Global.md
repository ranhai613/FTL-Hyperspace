---
layout: lua
title: Global
lang: en
category: Class
---

# Class "Global"

<!-- Head content to be pulled from "lua-source-parts-inject/Hyperspace/Global/_head.md" -->




## Static Methods
{: #Static-Methods .lua-content-section}
### GetInstance ()
{: #GetInstance .lua-content-item aria-label='StaticMethods' }
#### [Global](../Hyperspace/Global) .GetInstance ()
{: aria-label='StaticMethods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/Global/GetInstance().md" -->
Returns the main instance of [`Global`](#Global). Always use this to access any members and methods belonging to this class. `Hyperspace.Global.GetInstance()`
<!-- End of content -->

___
### IsSeededRun ()
{: #IsSeededRun .lua-content-item aria-label='StaticMethods' }
#### boolean .IsSeededRun ()
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Global/IsSeededRun().md" -->

___


## Methods
{: #Methods .lua-content-section}
### GetAnimationControl ()
{: #GetAnimationControl .lua-content-item aria-label='Methods' }
#### [AnimationControl](../Hyperspace/AnimationControl) :GetAnimationControl ()
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/Global/GetAnimationControl().md" -->
Returns the main instance of [`AnimationControl`](#AnimationControl). Always use this to access any members and methods belonging to the [`AnimationControl`](#AnimationControl) class, or the shortcut `Hyperspace.Animations`.
<!-- End of content -->

___
### GetBlueprints ()
{: #GetBlueprints .lua-content-item aria-label='Methods' }
#### [BlueprintManager](../Hyperspace/BlueprintManager) :GetBlueprints ()
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/Global/GetBlueprints().md" -->
Returns the main instance of [`BlueprintManager`](#BlueprintManager). Always use this to access any members and methods belonging to the [`BlueprintManager`](#BlueprintManager) class, or the shortcut `Hyperspace.Blueprints`.
<!-- End of content -->

___
### GetCApp ()
{: #GetCApp .lua-content-item aria-label='Methods' }
#### [CApp](../Hyperspace/CApp) :GetCApp ()
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/Global/GetCApp().md" -->
Returns the main instance of [`CApp`](#CApp). Always use this to access any members and methods belonging to the [`CApp`](#CApp) class, or the shortcut `Hyperspace.App`.
<!-- End of content -->

___
### GetCrewFactory ()
{: #GetCrewFactory .lua-content-item aria-label='Methods' }
#### [CrewMemberFactory](../Hyperspace/CrewMemberFactory) :GetCrewFactory ()
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/Global/GetCrewFactory().md" -->
Returns the main instance of [`CrewMemberFactory`](#CrewMemberFactory). Always use this to access any members and methods belonging to the [`CrewMemberFactory`](#CrewMemberFactory) class, or the shortcut `Hyperspace.CrewFactory`.
<!-- End of content -->

___
### GetEventGenerator ()
{: #GetEventGenerator .lua-content-item aria-label='Methods' }
#### [EventGenerator](../Hyperspace/EventGenerator) :GetEventGenerator ()
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/Global/GetEventGenerator().md" -->
Returns the main instance of [`EventGenerator`](#EventGenerator). Always use this to access any members and methods belonging to the [`EventGenerator`](#EventGenerator) class, or the shortcut `Hyperspace.Event`.
<!-- End of content -->

___
### GetMouseControl ()
{: #GetMouseControl .lua-content-item aria-label='Methods' }
#### [MouseControl](../Hyperspace/MouseControl) :GetMouseControl ()
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/Global/GetMouseControl().md" -->
Returns the main instance of [`MouseControl`](#MouseControl). Always use this to access any members and methods belonging to the [`MouseControl`](#MouseControl) class, or the shortcut `Hyperspace.Mouse`.
<!-- End of content -->

___
### GetScoreKeeper ()
{: #GetScoreKeeper .lua-content-item aria-label='Methods' }
#### [ScoreKeeper](../Hyperspace/ScoreKeeper) :GetScoreKeeper ()
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/Global/GetScoreKeeper().md" -->
Returns the main instance of [`ScoreKeeper`](#ScoreKeeper). Always use this to access any members and methods belonging to the [`ScoreKeeper`](#ScoreKeeper) class, or the shortcut `Hyperspace.Score`.
<!-- End of content -->

___
### GetShipInfo ()
{: #GetShipInfo .lua-content-item aria-label='Methods' }
#### [ShipInfo](../Hyperspace/ShipInfo) :GetShipInfo (boolean enemy=false)
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/Global/GetShipInfo(boolean).md" -->
Returns [`ShipInfo`](#ShipInfo) for the player ship if `enemy` is `false`, or for the enemy ship if `enemy` is `true`.
<!-- End of content -->

___
### GetShipManager ()
{: #GetShipManager .lua-content-item aria-label='Methods' }
#### [ShipManager](../Hyperspace/ShipManager) :GetShipManager (integer iShipId)
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/Global/GetShipManager(integer).md" -->
Returns the instance of [`ShipManager`](#ShipManager) associated with the given ID (can be 0 or 1). If a ship does not exist for the given ID, returns `nil`.
<!-- End of content -->

___
### GetSoundControl ()
{: #GetSoundControl .lua-content-item aria-label='Methods' }
#### [SoundControl](../Hyperspace/SoundControl) :GetSoundControl ()
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/Global/GetSoundControl().md" -->
Returns the main instance of [`SoundControl`](#SoundControl). Always use this to access any members and methods belonging to the [`SoundControl`](#SoundControl) class, or the shortcut `Hyperspace.Sounds`.
<!-- End of content -->

___
### GetTextLibrary ()
{: #GetTextLibrary .lua-content-item aria-label='Methods' }
#### [TextLibrary](../Hyperspace/TextLibrary) :GetTextLibrary ()
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/Global/GetTextLibrary().md" -->
Returns the main instance of [`TextLibrary`](#TextLibrary). Always use this to access any members and methods belonging to the [`TextLibrary`](#TextLibrary) class, or the shortcut `Hyperspace.Text`.
<!-- End of content -->

___
### GetTutorialManager ()
{: #GetTutorialManager .lua-content-item aria-label='Methods' }
#### [TutorialManager](../Hyperspace/TutorialManager) :GetTutorialManager ()
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/Global/GetTutorialManager().md" -->
Returns the main instance of [`TutorialManager`](#TutorialManager). Always use this to access any members and methods belonging to the [`TutorialManager`](#TutorialManager) class, or the shortcut `Hyperspace.Tutorial`.
<!-- End of content -->

___


## Fields
{: #Fields .lua-content-section}
### currentSeed (Read-only)
{: #currentSeed .lua-content-item aria-label='Fields' }
#### uint .currentSeed
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/Global/currentSeed.md" -->
**Read-only**
The seed for the run.
<!-- End of content -->

___
